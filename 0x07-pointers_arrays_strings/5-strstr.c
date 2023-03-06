#include "main.h"
/**
 * _strstr - entry code
 *@haystack: string
 *@needle: string
 * Return: string.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i])
	{
		j = 0;
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
			j++;
		}
		if (needle[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
