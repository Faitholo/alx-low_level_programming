#include "main.h"
/**
 *main - Principal functin
 * @ac: cant args
 * @av: array of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int new_open, new_open2, new_write, new_read = 1, new_close;
	char *buffer[2050];
	size_t size = 2050;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	new_open = open(av[1], O_RDONLY);
	if (new_open == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	new_open2 = open(av[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (new_open2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (new_read)
	{
		new_read = read(new_open, buffer, size);
		if (new_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		new_write = write(new_open2, buffer, new_read);
		if (new_read > 0)
			if (new_write == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	new_read = close(new_open);
	new_close = close(new_open2);
	if (new_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", new_open), exit(100);
	if (new_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", new_open2), exit(100);
	return (0);

}
