#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
 * err_msg - function that prints an error message
 * @msg: Char pointer containing error message to print
 * @file: Char pointer for string to print name of object with error
 * @status: Int for exit status code to use
 * Return: Void
 */

void err_msg(char *msg, char *file, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file);
	exit(status);
}

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

	if (argc != 3)
		err_msg("Usage: cp file_from file_to", "", 97);

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
		err_msg("Error: Can't read from file ", argv[1], 98);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 < 0)
		err_msg("Error: Can't write to ", argv[2], 99);

	do {
		n_read = read(fd, buf, 1024);
		if (n_read < 0)
			err_msg("Error: Can't read from file ", argv[1], 98);

		n_write = write(fd2, buf, n_read);
		if (n_write < 0)
			err_msg("Error: Can't write to ", argv[2], 99);
	} while (n_read == 1024);

	FD_VALUE = close(fd);
	if (FD_VALUE < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	FD_VALUE = close(fd2);
	if (FD_VALUE < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
