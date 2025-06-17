#ifndef ICON_H
#define ICON_H

#include <string>
#include "color.h"

class Icon {
private:
    std::string _text;
    Color _color;

public:
    Icon(const std::string& text = "?", Color color = Color::WHITE);
    std::string getText() const;
    Color getColor() const;
};

#endif
