#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content to append
 * Return: Returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);


	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (write(file, text_content, i) == -1)
		return (-1);
	close(file);
	return (1);
}
