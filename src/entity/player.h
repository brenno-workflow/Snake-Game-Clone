#pragma once

#include <raylib.h>
#include <deque>

using namespace std;

// Class
class Player{

    // Public
    public:

        // Variables
        deque<Vector2> __body;
        int __grid_size, __grid_count;
        int __speed;
        Color __color = {43, 51, 24, 255};

        // Functions
        void Draw();
        void Update();
};

