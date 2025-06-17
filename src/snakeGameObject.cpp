#include "snakeGameObject.h"
#include "gameObject.h"

SnakeGameObject::SnakeGameObject(int x, int y, const Icon& icon)
    : _position(x, y), _icon(icon) {}

void SnakeGameObject::moveTo(const Position& pos) {
    _position = pos;
}

Position SnakeGameObject::getPosition() const {
    return _position;
}

Icon SnakeGameObject::getIcon() const {
    return _icon;
}

bool SnakeGameObject::intersect(ICollider* other) {
    auto* obj = dynamic_cast<GameObject*>(other); 
    return obj && _position == obj->getPosition();
}

void SnakeGameObject::onCollision(ICollider* other) {
    
}
