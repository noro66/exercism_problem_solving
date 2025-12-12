#include "collatz_conjecture.h"
int steps(int start)
{
    int steps;

    steps = 0;
    if (start <= 0)
        return (-1);
    if (start == 1)
        return 0; 
    while(start != 1)
    {
        if (start % 2 == 0)
            start /= 2;
        else 
            start = (start * 3) + 1;
        steps++;
    }
    return (steps);
}