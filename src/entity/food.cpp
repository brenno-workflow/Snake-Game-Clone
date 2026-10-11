#include "food.h"
#include <raylib.h>

#include "../utils/utils.h"

using namespace std;

void Food::Draw()
{
    DrawRectangleRounded(Rectangle{__position.x * __grid_size, __position.y * __grid_size, FloatFormat(__grid_size/1.25), FloatFormat(__grid_size/1.25)}, 0.3, 0, __color);
}

void Food::Update()
{
    
}

Vector2 Food::RandomPosition()
{
    float __x = GetRandomValue(0, __grid_count - 1);
    float __y = GetRandomValue(0, __grid_count - 1);
    return Vector2{__x, __y};
}


