#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "iCollider.h"
#include "icon.h"
#include "position.h"

class GameObject : public ICollider {

	public:
    virtual void moveTo(const Position& pos) = 0;
    virtual Position getPosition() const = 0;
    virtual Icon getIcon() const = 0;


    bool intersect(ICollider* other) override;
    void onCollision(ICollider* other) override;

	
    virtual ~GameObject() = default;
};

#endif
