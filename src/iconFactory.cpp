#include "iconFactory.h"

Icon IconFactory::getSnakeHeadIcon() {
    return Icon("RO", Color::RED);
}

Icon IconFactory::getSnakeBodyIcon() {
    return Icon("PA", Color::GREEN);
}

Icon IconFactory::getFoodIcon() {
    return Icon("SC", Color::BLUE);
}
