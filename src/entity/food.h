#pragma once

#include <raylib.h>

// Class
class Food{

    // Public
    public:

        // Variables
        float __x, __y;
        int __radius;
        Color __color = {78, 10, 23, 255};

        // Functions
        void Draw();
        void Update();
};