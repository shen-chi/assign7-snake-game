#ifndef SNAKE_GAME_OBJECT_H
#define SNAKE_GAME_OBJECT_H

#include "gameObject.h"

class SnakeGameObject : public GameObject {
private:
    Position _position;
    Icon _icon;

public:
    SnakeGameObject(int x, int y, const Icon& icon);

    void moveTo(const Position& pos) override;
    Position getPosition() const override;
    Icon getIcon() const override;
    bool intersect(ICollider* other) override;       
    void onCollision(ICollider* other) override;     
};

#endif
