#include "AnsiPrint.h"
#include <iostream>

void AnsiPrint::printColoredText(const std::string& text, Color color) {
    std::cout << "\033[" << static_cast<int>(color) << "m" << text << "\033[0m";
}
