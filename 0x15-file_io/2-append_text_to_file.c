#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename:  is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fild = 0, chk = 0, i = 0;

	if (filename == NULL)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		chk = write(fild, text_content, i);
		if (chk < 0)
		return (-1);
	}
	close(fild);
	return (1);
}
