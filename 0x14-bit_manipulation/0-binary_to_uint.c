#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing 1's and 0's (by chilljoy)
 *
 * Return: converted numbrer (Success) | 0 (Failure)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int chill;
	int len, base_two;

	if (!b)
		return (0);

	chill = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			chill += base_two;
		}
	}

	return (chill);
}
