#include "unit.h"

Unit::Unit(int x, int y) : _position(x, y) {}

Position Unit::getPosition() const {
    return _position;
}

void Unit::moveTo(const Position& pos) {
    _position = pos;
}
