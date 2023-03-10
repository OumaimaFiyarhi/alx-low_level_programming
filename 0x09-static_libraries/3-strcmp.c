#include "main.h"

/**
 * _strcmp - entry code
 *@s1: first string
 *@s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			break;
		}
		if (s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
