#include "main.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: destination string
 * @src: source string
 * @n: number of bytes 
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
