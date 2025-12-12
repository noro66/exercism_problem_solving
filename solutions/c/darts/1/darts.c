#include "darts.h"

int score(coordinate_t core)
{
	double distance;

	distance = SQUARE(core.x) + SQUARE(core.y);
	if (distance <= 1)
		return (10);
	else if (distance <= 25.0)
		return (5);
	else if (distance <= 100.0)
		return (1);
	return (0);
}
