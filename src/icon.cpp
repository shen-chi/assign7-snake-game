#include "icon.h"

Icon::Icon(const std::string& text, Color color) : _text(text), _color(color) {}

std::string Icon::getText() const {
    return _text;
}

Color Icon::getColor() const {
    return _color;
}
