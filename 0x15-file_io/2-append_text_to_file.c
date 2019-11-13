#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Const char for name of file to be created
 * @text_content: NULL terminated char string to write to the file
 * Return: Returns: 1 on success, -1 on failure or if file name is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, len = 0, n_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd < 0)
		return (-1);

	for (i = 0; text_content[i]; i++)
		len++;

	n_write = write(fd, text_content, len);

	if (n_write < 0)
		return (-1);

	return (1);
}
