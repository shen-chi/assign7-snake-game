#include "SnakeController.h"
#include "gameObjectFactory.h"
#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <cstdlib>
#include <ctime>

const int HEIGHT = 20;
const int WIDTH = 40;

SnakeController::SnakeController() : _score(0), _direction('d'), _gameOver(false) {
    srand(time(0));
    int centerX = HEIGHT / 2;
    int centerY = WIDTH / 2;
    _snake.push_back(GameObjectFactory::createSnakeHead(centerX, centerY));
    _snake.push_back(GameObjectFactory::createSnakeBody(centerX, centerY - 1));
    _snake.push_back(GameObjectFactory::createSnakeBody(centerX, centerY - 2));
    for (auto* s : _snake) _objects.push_back(s);
    spawnFood();
}

SnakeController::~SnakeController() {
    for (auto* obj : _objects) delete obj;
}

void SnakeController::spawnFood() {
    int x, y;
    bool valid = false;
    while (!valid) {
        x = rand() % (HEIGHT - 2) + 1;
        y = rand() % (WIDTH - 2) + 1;
        valid = true;
        for (auto* s : _snake) {
            if (s->getPosition().x == x && s->getPosition().y == y) {
                valid = false;
                break;
            }
        }
    }
    _food = GameObjectFactory::createFood(x, y);
    _objects.push_back(_food);
}

void SnakeController::moveSnake() {
    Position headPos = _snake[0]->getPosition();
    Position newPos = headPos;

    switch (_direction) {
        case 'w': newPos.x--; break;
        case 's': newPos.x++; break;
        case 'a': newPos.y--; break;
        case 'd': newPos.y++; break;
    }

    if (newPos.x <= 0 || newPos.x >= HEIGHT - 1 || newPos.y <= 0 || newPos.y >= WIDTH - 1) {
        _gameOver = true;
        return;
    }

    for (size_t i = 1; i < _snake.size(); ++i) {
        if (_snake[i]->getPosition() == newPos) {
            _gameOver = true;
            return;
        }
    }

    for (size_t i = _snake.size() - 1; i > 0; --i)
        _snake[i]->moveTo(_snake[i - 1]->getPosition());

    _snake[0]->moveTo(newPos);

    if (_snake[0]->intersect(_food)) {
        _snake[0]->onCollision(_food);
        _score += 10;
        Position tail = _snake.back()->getPosition();
        auto* newBody = GameObjectFactory::createSnakeBody(tail.x, tail.y);
        _snake.push_back(newBody);
        _objects.push_back(newBody);
        spawnFood();
    }
}

void SnakeController::run() {
    termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);

    while (!_gameOver) {
        char ch;
        if (read(STDIN_FILENO, &ch, 1) > 0) {
            if ((ch == 'w' && _direction != 's') ||
                (ch == 's' && _direction != 'w') ||
                (ch == 'a' && _direction != 'd') ||
                (ch == 'd' && _direction != 'a')) {
                _direction = ch;
            }
        }

        moveSnake();
        _view.display(_objects, _food, _score, HEIGHT, WIDTH);
        usleep(150000);
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    std::cout << "Game Over! Final Score: " << _score << std::endl;
}
