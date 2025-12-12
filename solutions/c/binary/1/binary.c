#include "binary.h"

int convert(const char *input)
{
	int	res;

	res = 0;
	while (*input)
	{
		if ( *input == '1' || *input == '0')
			res = res * 2 + (*input - '0');
		else
			return (-1);
		input++;
	}
	return (res);
}

