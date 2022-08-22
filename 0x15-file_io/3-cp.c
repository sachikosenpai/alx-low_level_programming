#include "main.h"

/**
 * check_97 - to check number of arguments
 * @argc: argument
 * Return: nothing
 */

void check_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_98 - to check if file does not exist, or if you can not read it.
 * @check: confirm
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 */

void check_98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}



/**
 * check_99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 */

void check_99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}


/**
 * check_100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 */

void check_100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file from one fil to another
 * @argc: number of argument passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
		int fd_from, fd_to, close_to, close_from;
		ssize_t lenr, lenw;
		char buffer[1024];
		mode_t file_perm;

		check_97(argc);
		fd_from = open(argv[1], O_RDONLY);

		check_98((ssize_t)fd_from, argv[1], -1, -1);
		file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
		fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);

		check_99((ssize_t)fd_to, argv[2], fd_from, -1);
		lenr = 1024;
		while (lenr == 1024)
		{
			lenr = read(fd_from, buffer, 1024);
			check_98(lenr, argv[1], fd_from, fd_to);
			lenw = write(fd_to, buffer, lenr);
			if (lenw != lenr)
				lenw = -1;
			check_99(lenw, argv[2], fd_from, fd_to);
		}
		close_to = close(fd_to);
		close_from = close(fd_from);
		check_100(close_to, fd_to);
		check_100(close_from, fd_from);
		return (0);
}
