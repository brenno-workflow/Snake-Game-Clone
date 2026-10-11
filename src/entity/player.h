#pragma once

#include <raylib.h>

// Class
class Player{

    // Public
    public:

        // Variables
        float __x, __y;
        float __width, __height;
        int __speed;
        Color __color = {43, 51, 24, 255};

        // Functions
        void Draw();
        void Update();
};

