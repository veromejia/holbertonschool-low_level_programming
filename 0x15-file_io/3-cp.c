#include "holberton.h"
/**
 * main - Entry point
 * @ac: number of arguments
 * @av: arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int file_from, file_to, rd, wr;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (file_to == -1)
		open(av[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			exit(99);

	if (file_from != -1)
	{
		rd = 1;
		while (rd)
		{
			rd = read(file_from, buffer, 1024);
			if (rd == -1)
				dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n",
				 av[1]), exit(98);
			wr = write(file_to, buffer, rd);
			if (wr != rd || wr == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
