#include<stdio.h>

/**
 * main -entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%i", x);
		++x;
	}
	printf("\n");

	return (0);
}
