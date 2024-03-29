#include "main.h"

/**
 * binary_to_uint - converts binary to int (chilljoy)
 * @b: binary as a string
 *
 * Return: decimal value of the binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
			res = res << 1;
		else if (*b == '1')
			res = (res << 1) | 1;
		else
			return (0);
		b++;
	}
	return (res);
}
