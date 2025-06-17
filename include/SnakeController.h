#ifndef SNAKE_CONTROLLER_H
#define SNAKE_CONTROLLER_H

#include "view.h"
#include "gameObject.h"
#include <vector>

class SnakeController {
private:
    std::vector<GameObject*> _objects;
    std::vector<GameObject*> _snake;
    GameObject* _food;
    View _view;
    int _score;
    char _direction;
    bool _gameOver;

    void moveSnake();
    void spawnFood();

public:
    SnakeController();
    ~SnakeController();
    void run();
};

#endif
