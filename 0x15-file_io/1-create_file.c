#include "main.h"

/**
 * create_file - create a file by (chilljoy)
 * @filename: name of the file
 * @text_content: text
 * Return: 1 if successful -1 if not
*/

int create_file(const char *filename, char *text_content)
{

	int fi;
	int flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	fi = open(filename, flags, mode);
	if (fi == -1)
		return (-1);
	if (!text_content)
		text_content = "\0";

	if (write(fi, text_content, strlen(text_content)) == -1)
		return (-1);
	return (1);
}
