#include "main.h"
#define BUFFER_SIZE 1024
/**
 * close_file - function that closes file descriptor
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		exit_with_error(100, "Error: Can't close fd %d\n", fd);
	}
}
/**
 * exit_with_error - function that outputs an error
 * @code: exit value
 * @message: message to output
 * Return: nothing
 */
void exit_with_error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
/**
 * main - entry code
 * @argc: the number of arguments entered
 * @argv: an array of pointer to argc
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		exit_with_error(97, "Usage: cp file_from file_to");
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((read_bytes = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(to_fd, buffer, read_bytes);
		if (write_bytes == -1)
		{
			exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (read_bytes == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close_file(from_fd);
	close_file(to_fd);
	return (0);
}
