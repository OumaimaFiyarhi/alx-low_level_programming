#include "main.h"
/**
 * _memset - entry code
 * @s: string 
 * @b: constant
 * @n: number of bytes to be changed
 * Return : s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
