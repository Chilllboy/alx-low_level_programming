#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchat(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}

	putchar('\n');
	return (0);
}
