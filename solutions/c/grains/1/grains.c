#include "grains.h"
uint64_t square(uint8_t index)
{
    uint64_t total_by_index;
    int i;
    total_by_index = 1;
    i = 1;
    if (index == 0)
        return (0);
    while(i < index)
    {
        total_by_index *= 2;
        i++;
    }
    return (total_by_index);
}
uint64_t total(void)
{
    uint64_t sum;
    int    i;
    i = 1;
    sum = 0;
    while(i <= 64)
    {
        sum += square(i);
        i++;
    }
    return (sum);
}