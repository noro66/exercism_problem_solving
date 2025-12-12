#include "raindrops.h"

void convert(char result[], int drops)
{
	char *plong = "Plong";
	char *plang = "Plang";
	char *pling = "Pling";
	int index;
	int i;
	int drops_holder = drops;

	index = 0;
	i = 0;
	if (drops % 3 == 0)
	{
		while(pling[i])
			result[index++] = pling[i++];
	}	
	if (drops % 5 == 0)
	{
		i = 0;
		while(plang[i])
			result[index++] = plang[i++];
	}
	if (drops % 7 == 0)
	{
		i = 0;
		while(plong[i])
			result[index++] = plong[i++];
	}
	

	if (i == 0)
	{
		while (drops_holder > 0)
		{
			i++;
			drops_holder /= 10;
		}
		result[i] = '\0';
		while(drops > 0)
		{
			result[--i] = drops % 10 + '0';
			drops /= 10;
		}
	}
}
