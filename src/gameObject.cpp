#include "gameObject.h"

bool GameObject::intersect(ICollider* other) {
    auto* obj = dynamic_cast<GameObject*>(other);
    return obj && getPosition() == obj->getPosition();
}

void GameObject::onCollision(ICollider* other) {
 
}
