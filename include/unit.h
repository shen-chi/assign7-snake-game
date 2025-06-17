#ifndef UNIT_H
#define UNIT_H

#include "position.h"

class Unit {
protected:
    Position _position;

public:
    Unit(int x, int y);
    Position getPosition() const;
    void moveTo(const Position& pos);
};

#endif
