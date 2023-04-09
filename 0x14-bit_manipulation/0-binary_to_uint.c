#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing 1's and 0's (by chilljoy)
 *
 * Return: converted numbrer (Success) | 0 (Failure)
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int chill, joy;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	--i, chill = 0, joy = 0;
	while (i >= 0)
	{
		chill += (b[i--] - 48) << (joy++);
	}
	return (chill);
}
