#ifndef GAME_OBJECT_FACTORY_H
#define GAME_OBJECT_FACTORY_H

#include "gameObject.h"

class GameObjectFactory {
public:
    static GameObject* createSnakeHead(int x, int y);
    static GameObject* createSnakeBody(int x, int y);
    static GameObject* createFood(int x, int y);
};

#endif
