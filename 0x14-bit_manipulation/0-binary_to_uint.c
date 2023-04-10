#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing 1's and 0's (by chilljoy)
 *
 * Return: converted numbrer (Success) | 0 (Failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int x, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (x = 0; b[x] != '\0'; x++)
		;

	for (x--, base_two = 1; x >= 0; x--, base_two *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
