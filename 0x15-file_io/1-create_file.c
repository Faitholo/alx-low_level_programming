#include "holberton.h"

/**
 * create_file -Function creates a file
 * @filename: file to create
 * @text_content: the content of filename
 *
 * Return: Integer
 */
int create_file(const char *filename, char *text_content)
{
	int new_open, new_write, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[size])
			size++;
	new_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	new_write = write(new_open, text_content, size);

	if (new_open == -1 || new_write == -1)
		return (-1);
	close(new_open);
	return (1);
}
