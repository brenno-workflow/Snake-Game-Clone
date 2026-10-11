#pragma once

#include <raylib.h>

// Class
class Food{

    // Public
    public:

        // Variables
        Vector2 __position;
        int __radius;
        int __grid_size, __grid_count;
        Color __color = {78, 10, 23, 255};

        // Functions
        void Draw();
        void Update();
        Vector2 RandomPosition();
};