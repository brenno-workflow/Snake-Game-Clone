#include "window.h"
#include <raylib.h>

using namespace std;

// Public
void Window::Start()
{
    InitWindow(__width, __height, "Snake v0.0.1");
    SetTargetFPS(__fps);
}

void Window::End()
{
    CloseWindow();
}

void Window::Draw()
{
    Background();
}

// Privete
void Window::Background()
{
    ClearBackground(__green);
}

void Window::Score()
{
    DrawText(TextFormat("%i", __score), 3 * __width / 4 - 20, 20, 80, WHITE);
}