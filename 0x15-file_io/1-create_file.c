#include <stdio.h>
#include "holberton.h"
/**
 * create_file - function that create a file
 * @filename: file to be created
 * @text_content: content of the file
 * Return: 1 if success -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;
	int a = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	a = write(file, text_content, i);
	if (a  == -1)
		return (-1);

	if (a == -1 || a != i)
		return (-1);
	close(file);
	return (1);
}
