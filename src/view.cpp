#include "view.h"
#include <iostream>
#include <vector>
#include <unistd.h>
#include <cstdlib>

void View::display(const std::vector<GameObject*>& objects, GameObject* food, int score, int height, int width) {
    system("clear");

    std::vector<std::vector<std::string>> grid(height, std::vector<std::string>(width, " "));

    for (int i = 0; i < width; ++i) {
        grid[0][i] = "-";
        grid[height - 1][i] = "-";
    }

    for (int i = 1; i < height - 1; ++i) {
        grid[i][0] = "|";
        grid[i][width - 1] = "|";
    }

    for (auto* obj : objects) {
    Position pos = obj->getPosition();
    if (pos.x >= 0 && pos.x < height-1 && pos.y >= 0 && pos.y < width-1) {
        grid[pos.x][pos.y] = obj->getIcon().getText()[0];
    }
}

if (food) {
    Position pos = food->getPosition();
    if (pos.x >= 0 && pos.x < height-1 && pos.y >= 0 && pos.y < width-1) {
        grid[pos.x][pos.y] = food->getIcon().getText()[0];
    }
}
    std::cout << "Score: " << score << "\n";
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << grid[i][j];
        }
        std::cout << "\n";
    }
}
