#include "hamming.h"


int compute(const char *lhs, const char *rhs)
{
	int result;

	result = 0;
	while (*lhs)
	{
		if( *lhs != *rhs)
			result++;
		lhs++;
		rhs++;
	}
	if (*lhs || *rhs)
		return (-1);
	return (result);
}



