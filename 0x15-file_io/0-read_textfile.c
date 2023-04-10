#include "main.h"

/**
 * read_textfile - reads and prits txt from a file to stdout
 * @filename: the name of the file (chilljoy)
 * @letters: number of letters to be read printed
 *
 * Return: actual number of read and prited letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	char *s;
	ssize_t rsize, wsize;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);

	s = malloc(sizeof(char) * letters);
	if (!s)
		return (0);
	rsize = read(x, s, letters);
	if (rsize < 0)
	{
		free(s);
		return (0);
	}

	s[rsize] = '\0';
	close(x);

	wsize = write(STDOUT_FILENO, s, rsize);
	if (wsize < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (wsize);
}
