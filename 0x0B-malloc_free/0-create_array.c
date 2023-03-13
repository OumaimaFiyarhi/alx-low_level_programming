#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry code
 * @c: the character to be changed
 * @size: the size of the memory to print
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
