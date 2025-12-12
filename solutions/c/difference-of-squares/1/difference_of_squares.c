#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number)
{
    unsigned int    num;
    unsigned int    sum;    
    num = 1;
    sum = 0;
    while (num <= number)
    {
        sum += (num * num);
        num++;
    }
    return (sum);
}
unsigned int square_of_sum(unsigned int number)
{
    unsigned int    num;
    unsigned int    sum;    
    num = 1;
    sum = 0;
    while (num <= number)
    {
        sum += num;
        num++;
    }
        return (sum * sum);
}
unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}