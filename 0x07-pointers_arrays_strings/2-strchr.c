#include "main.h"
#include <stddef.h>
/**
 * _strchr - check the code
 *@s: string
 *@c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
