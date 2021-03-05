//cpp
#include "loops.h"

int factorial(int num)
{

    int total = num;
    for (int i = num - 1; i > 0; i--)
    {
        total = total * i;
    };
    return total;
}