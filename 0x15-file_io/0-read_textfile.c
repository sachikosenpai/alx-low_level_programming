#include "main.h"


/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @letters: he number of letters it should read and print
 * @filename: name of the file
 * Return: 0 if filename is NULL
 * if filename cannot be opened return 0
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	r = read(fd, buffer, letters);

	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);

	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (r);

}
