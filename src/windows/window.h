#pragma once

#include <raylib.h>

// Class
class Window{

    // Public
    public:

        // Variables
        int __height = 750;
        int __width = 750;
        int __fps = 60;
        int __grid_size = 30;
        int __grid_count = 25;
        int __score = 0;
        Color __green = {173, 204, 96, 255};

        // Functions
        void Start();
        void End();
        void Draw();
        void Background();
        void Score();
};