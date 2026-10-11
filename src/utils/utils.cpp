#include "utils.h"

// Print
void print(const char* message)
{
    std::println("{}", message);
}

// FloatFormat
float FloatFormat(int __value)
{
    return static_cast<float>(__value);
}
