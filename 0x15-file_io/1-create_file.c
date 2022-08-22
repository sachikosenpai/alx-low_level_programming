#include "main.h"


/**
 * _strlen - to find size of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}



/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to wite to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w = write(fd, text_content, _strlen(text_content));

	if (w == -1 || w != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

