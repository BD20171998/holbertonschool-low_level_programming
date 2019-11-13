#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - program that copies the content of a file to another file
 * @argc: - Int of arguments passed into program including command
 * @argv: - Array of pointers to the strings of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int fd, fd2, FD_VALUE;
	ssize_t n_read, n_write;

	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	do {
		n_read = read(fd, buf, 1024);

		if (fd < 0 || n_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		n_write = write(fd2, buf, n_read);

		if (fd2 < 0 || n_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	} while (n_read == 1024);

	if (close(fd) < 0)
	{
		FD_VALUE = fd;
		dprintf(fd, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}

	if (close(fd2) < 0)
	{
		FD_VALUE = fd2;
		dprintf(fd, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
	return (0);
}
