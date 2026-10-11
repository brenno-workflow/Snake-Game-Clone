#include "food.h"
#include <raylib.h>

using namespace std;

void Food::Draw()
{
    DrawCircle(__x, __y, __radius, __color);
}

void Food::Update()
{

}

