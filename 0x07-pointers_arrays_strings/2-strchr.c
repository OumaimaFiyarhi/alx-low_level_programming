#include "main.h"
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
	if (c == '\0')
	{
		return (s + i);
	}
	return (0);
}
