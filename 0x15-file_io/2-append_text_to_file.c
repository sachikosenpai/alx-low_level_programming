#include "main.h"

/**
 * _strlen - find length of a string
 * @str: string
 * Return: length of the string
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}

/**
 * append_text_to_file - function that appends file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		length = write(fd, text_content, _strlen(text_content));
	close(fd);

	if (length == -1)
		return (-1);
	return (1);
}
