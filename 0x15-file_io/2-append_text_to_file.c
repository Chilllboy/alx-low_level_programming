#include "main.h"

/**
 * _strlen2 - counts number of characters by(chilljoy)
 * @s: given strng
 *
 * Return: Lengh of the strng
 */
size_t _strlen2(char *s)
{
	size_t xy;

	xy = 0;
	while (s[xy])
		xy++;
	return (xy);
}

/**
 * append_text_to_file - appends txt at the end of a file (chilljoy)
 * @filename: the name of file
 * @text_content: content to be add at the end of file
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
		if (write(fd, text_content, _strlen2(text_content)) < 0)
			return (-1);
	close(fd);
	return (1);
}
