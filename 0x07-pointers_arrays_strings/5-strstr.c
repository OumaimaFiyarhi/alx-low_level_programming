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
	int j = 0;
	int k;

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if (j == 0)
			{
				k = i;
			}
			j++;
		}
		else
		{
			j = 0;
		}
		if (needle[j] == '\0')
		{
			return (haystack + k);
		}
		i++;
	}
	return (0);
}
