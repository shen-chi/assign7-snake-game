// iCollider.h
#ifndef I_COLLIDER_H
#define I_COLLIDER_H

class ICollider {
public:
    virtual ~ICollider() = default;
    virtual bool intersect(ICollider* other) = 0;
    virtual void onCollision(ICollider* other) = 0;
};

#endif
