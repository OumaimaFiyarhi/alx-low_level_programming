#include "main.h"
#include <stdlib.h>
/**
 * _calloc - entry code
 *@nmemb: number of elements
 *@size: size of bytes
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		array[i++] = 0;
	}
	return (array);
}
