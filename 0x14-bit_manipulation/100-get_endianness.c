#include "main.h"

/**
 * get_endianness - checks endianness
 * Descreption: by (chilljoy)
 *
 * Return: 0 Big Endian | 1 Little Endian
 */
int get_endianness(void)
{
	short j;
	char *endian;

	j = 15;
	endian = (char *)&j;
	if (endian)
		return (1);
	return (0);
}
