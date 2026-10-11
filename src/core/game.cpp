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
    food.__grid_size = window.__grid_size;
    food.__grid_count = window.__grid_count;
    food.__position = food.RandomPosition();
    player.__grid_size = window.__grid_size;
    player.__grid_count = window.__grid_count;
    player.__body = {Vector2{6,9}, Vector2{5,9}, Vector2{4,9}};
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
        player.Update();

        // --- Event ---

        // --- Drawing ---
        window.Draw();
        food.Draw();
        player.Draw();

        // End
        EndDrawing();        
    }

    // Window Close
    window.End();
}
