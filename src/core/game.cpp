#include "game.h"
#include <raylib.h>

using namespace std;

#include "../windows/window.h"
#include "../entity/food.h"
#include "../entity/player.h"

// Game
void Snake()
{
    // Class
    Window window;
    Food food;
    Player player;

    // Variables
    food.__x = 5 * window.__grid_size;
    food.__y = 6 * window.__grid_size;
    food.__radius = window.__grid_size / 2;
    player.__x = window.__width - 35;
    player.__y = window.__height / 2 - 60;
    player.__width = 25;
    player.__height = 120;
    player.__speed = 6;

    // Window Open
    window.Start();

    // Game Loop
    while(WindowShouldClose() == false)
    {
        // Start
        BeginDrawing();

        // --- Updating ---
        food.Update();
        //player.Update();

        // --- Event ---

        // --- Drawing ---
        window.Draw();
        food.Draw();
        //player.Draw();

        // End
        EndDrawing();        
    }

    // Window Close
    window.End();
}
