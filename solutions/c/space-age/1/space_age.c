#include "space_age.h"

float age(planet_t planet, int64_t seconds)
{
	float	orbital_period[8];
	orbital_period[0] = 0.2408467;
	orbital_period[1] = 0.61519726;
	orbital_period[2] = 1.0;
	orbital_period[3] = 1.8808158;
	orbital_period[4] = 11.862615;
	orbital_period[5] = 29.447498;
	orbital_period[6] = 84.016846;
	orbital_period[7] = 164.79132;

	if (planet > NEPTUNE || planet < MERCURY)
		return ((float) -1);
	return ((float)( seconds / (orbital_period[planet] * 31557600)));
}


