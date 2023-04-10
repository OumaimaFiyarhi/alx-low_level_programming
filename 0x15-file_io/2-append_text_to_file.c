#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr;
	int len = 0;
	int fd;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
