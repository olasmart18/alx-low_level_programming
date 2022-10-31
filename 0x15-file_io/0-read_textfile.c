#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: is the number of letters it should read and print
 * Return: the number of character printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buf;

	if (filename == NULL || !letters)
		return (0);
	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	chk = read(fild, buf, letters);
	chk = write(STDOUT_FILENO, buf, chk);

	if (chk < 0)
		return (0);

	close(fild);
	free(buf);
	return (chk);
}
