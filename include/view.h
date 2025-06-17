#ifndef VIEW_H
#define VIEW_H

#include <vector>
#include "gameObject.h"

class View {
public:
    void display(const std::vector<GameObject*>& objects, GameObject* food, int score, int height, int width);
};

#endif
