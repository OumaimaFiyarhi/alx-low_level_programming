#include "main.h"
/**
 * _strncpy - entry code
 *@dest: variable
 *@src: variable
 *@n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
