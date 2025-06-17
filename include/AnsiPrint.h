#ifndef ANSI_PRINT_H
#define ANSI_PRINT_H

#include <string>
#include "color.h"

class AnsiPrint {
public:
    static void printColoredText(const std::string& text, Color color);
};

#endif
