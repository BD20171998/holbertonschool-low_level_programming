#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: Const char for name of file to be printed
 * @letters: Size_t for number of bytes to be printed
 * Return: Bytes read, 0 if error reading or writing to std output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t  n_read, n_write;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		free(buf);
		return (0);
	}

	n_read = read(fd, buf, letters);

	if (n_read < 0)
	{
		free(buf);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buf, n_read);

	if (n_write < 0)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (n_read);
}
