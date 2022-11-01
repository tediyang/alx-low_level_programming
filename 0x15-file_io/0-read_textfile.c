#include "main.h"

/**
 * read_textfile - read from a text file and write to POSIX
 *
 * @filename: the name of the file to read.
 * @letters: letters to print.
 *
 * Return: 0 when it fails or the number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	r = read(f, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (f == -1 || w == -1 || r == -1 || r != w)
	{
		free(buf);
		return (0);
	}

	free(buf);

	close(f);

	return (w);
}
