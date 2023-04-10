#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing 1's and 0's
 * Descreption: by (chilljoy)
 *
 * Return: converted numbrer (Success) | 0 (Failure)
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x, y;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	--i, x = 0, y = 0;
	while (i >= 0)
	{
		x += (b[i--] - 48) << (y++);
	}
	return (x);
}
