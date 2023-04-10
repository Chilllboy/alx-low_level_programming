#include "main.h"

/**
 * read_textfile - read annd print from a text fil by (chilljoy)
 * @filename: name of the file
 * @letters: number of lettrs to readn print
 * Return: number f printed letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fi;
	char *str;
	ssize_t nread, nwrite;

	if (!filename)
		return (0);
	fi = open(filename, O_RDONLY);
	str = malloc(sizeof(char) * letters);
	if (fi == -1 || !str)
		return (0);

	nread = read(fi, str, letters);
	nwrite = write(1, str, nread);

	free(str);
	close(fi);
	return (nwrite);
}
