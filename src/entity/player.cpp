#include "player.h"
#include <raylib.h>
#include <deque>

#include "../utils/utils.h"

using namespace std;

void Player::Draw()
{
    for(int __i = 0; __i < __body.size(); __i++)
    {
        int __x = __body[__i].x;
        int __y = __body[__i].y;
        DrawRectangleRounded(Rectangle{FloatFormat(__x) * __grid_size, FloatFormat(__y) * __grid_size, FloatFormat(__grid_size), FloatFormat(__grid_size)}, 0.3, 0, __color);
    }
}

void Player::Update()
{
    // Move
    if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
    {
        //__y -= __speed;
    }
        
    if(IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
    {
        //__y += __speed;
    }

}

