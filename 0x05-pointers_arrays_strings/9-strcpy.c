#include "main.h"
/**
 * _strcpy - entry code
 *@dest: variable
 *@src: variable
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
