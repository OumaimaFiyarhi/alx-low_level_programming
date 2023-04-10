#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the SO
 * @filename: is the name of the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret = 0;
	char *str;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}
	ret = read(fd, str, letters);
	if (ret == -1 || write(1, str, ret) != ret)
	{
		ret = 0;
	}
	free(str);
	close(fd);
	return (ret);
}
