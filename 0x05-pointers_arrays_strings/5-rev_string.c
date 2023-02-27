/**
 * rev_string - reverses a given string
 * @s: given string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	/* Find length of string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* Swap characters in string */
	for (i--, j = 0; j < i; i--, j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

