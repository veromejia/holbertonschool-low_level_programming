#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - Reads a file and prints it to the POSIX standard output.
 * @filename: contain the file to be read
 * @letters: numbers of letter that there are in the file.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_file;
	ssize_t write_file;
	char *buffer;

	buffer = malloc(sizeof(filename));

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	read_file = read(file, buffer, letters);

	write_file = write(STDOUT_FILENO, buffer, read_file);
	free(buffer);
	if (write_file == -1)
		return (0);
	close(file);
	return (write_file);
}
