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
	ssize_t file, read_con, countw;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	read_con = read(file, buf, letters);
	if (read_con == -1)
		return (0);

	countw = write(STDOUT_FILENO, buf, read_con);
	if (countw == -1 || read_con != countw)
		return (0);

	free(buf);

	close(file);

	return (countw);
}
