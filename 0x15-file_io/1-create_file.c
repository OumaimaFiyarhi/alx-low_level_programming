#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success and -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int wr;
	int fd;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		{
			continue;
		}
		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
	}
	return (1);
}
