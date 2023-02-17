#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		++x;
	}
	putchar('\n');

	return (0);
}
