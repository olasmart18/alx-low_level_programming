#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: nmae of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, chk = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		text_content = "";

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fild < 0)
		return (-1);

	while (text_content[i])
		i++;
	chk = write(fild, text_content, i);
	if (chk < 0)
		return (-1);

	close(fild);
	return (1);
}
