#include <stdio.h>

/**
 * main -  entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar('0' + (i % 10));
				putchar('0' + (j % 10));
				putchar('0' + (k % 10));
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
