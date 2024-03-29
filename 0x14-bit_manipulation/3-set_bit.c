#include "main.h"

/**
 * convert_to_binary - (chilljoy) converts decimal to binary
 * @n: decimal number
 * @bits: array to hold bits
 *
 * Return: void
 */
void convert_to_binary(unsigned long int n, unsigned short *bits)
{
	unsigned long int tmp;
	unsigned short i;

	i = 0;
	while (n)
	{
		tmp = n;
		n >>= 1;
		if ((n << 1) == tmp)
			bits[i++] = 0;
		else
			bits[i++] = 1;
	}
	while (i < 64)
		bits[i++] = 0;
}

/**
 * convert_to_decimal - coverts binary to decimal
 * @b: array of bits (binary number)
 *
 * Return: decimal number
 */
unsigned long int convert_to_decimal(unsigned short *b)
{
	short i, pow;
	unsigned long int n;

	i = 0, pow = 0, n = 0;
	while (i < 64)
		n += b[i++] << (pow++);
	return (n);
}

/**
 * set_bit - set bit at given index to 1
 * @n: adress of given number in decimal
 * @index: given index
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned short binary[64];

	if (index >= 64)
		return (-1);
	convert_to_binary(*n, binary);
	binary[index] = 1;
	(*n) = convert_to_decimal(binary);
	return (1);
}
