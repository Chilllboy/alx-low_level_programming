#include "main.h"

/**
 * swap_int - swaps to integer values
 *
 * @a: first integer
 *
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int siv;

	siv = *a;
	*a = *b;
	*b = siv;
}
