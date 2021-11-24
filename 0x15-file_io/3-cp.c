#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFSIZE 1024

/**
 * main - function that copy a file content to another file
 * @argc: the argument count
 * @argv: the argument values
 * Return: 1 Always
 */

int main(int argc, const char *argv[])
{
	int fd_in, fd_out;
	ssize_t b_read;
	char buffer[BUFFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_in = open(argv[1], O_RDONLY);

	if (fd_in < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);

	fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_out < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			close(fd_in), exit(99);

	while ((b_read = read(fd_in, buffer, BUFFSIZE)))
	{
		if (b_read < 0)
			close(fd_in), close(fd_out), exit(98);
		
		if (write(fd_out, buffer, b_read) < 0)
			close(fd_in), close(fd_out), exit(99);
	}

	if ((close(fd_in) | close(fd_out)) < 0)
		exit(100);

	return (0);
}
