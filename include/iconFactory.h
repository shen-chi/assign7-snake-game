#ifndef ICON_FACTORY_H
#define ICON_FACTORY_H

#include "icon.h"

class IconFactory {
public:
    static Icon getSnakeHeadIcon();
    static Icon getSnakeBodyIcon();
    static Icon getFoodIcon();
};

#endif
