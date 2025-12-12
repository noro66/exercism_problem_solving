#include "eliuds_eggs.h"
#include <stdio.h>

unsigned int egg_count(int number)
{
	int	count;
	char *binary_convertion;
	int i;
	int	number_holder;
	int	eggs_counter;

	count = 0;
	number_holder = number;
	if (number == 0)
		count++;
	while(number_holder > 0)
	{ 
		number_holder /= 2;
		count++;
	}
	binary_convertion = malloc(count + 1);
	if (binary_convertion == NULL)
		return (-1);
	i = 0;
	while (number > 0)
	{
		binary_convertion[i] = number % 2 + 48;
		number /= 2;
		i++;
	}
	binary_convertion[i] = '\0';
	eggs_counter = 0;
	while (binary_convertion[--i])
		if (binary_convertion[i] == '1')
			eggs_counter++;
	free(binary_convertion);
	return (eggs_counter);
}
