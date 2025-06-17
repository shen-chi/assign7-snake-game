#include "gameObjectFactory.h"
#include "snakeGameObject.h"

GameObject* GameObjectFactory::createSnakeHead(int x, int y) {
    return new SnakeGameObject(x, y, Icon("RO", Color::RED));
}

GameObject* GameObjectFactory::createSnakeBody(int x, int y) {
    return new SnakeGameObject(x, y, Icon("PA", Color::GREEN));
}

GameObject* GameObjectFactory::createFood(int x, int y) {
    return new SnakeGameObject(x, y, Icon("SC", Color::BLUE));
}
