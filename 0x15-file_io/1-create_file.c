#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success and -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	if (wr >= 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (-1);
}
