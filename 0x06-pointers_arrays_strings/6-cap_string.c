#include "main.h"
/**
 * cap_string - entry code
 *@c: character
 * Return: char
 */

char *cap_string(char *c)
{
	int i = 0;
	int j = 1;

	while (c[i] != '\0')
	{
		if (j == 1)
		{
			if ((c[i] >= 'a' && c[i] <= 'z'))
			{
				c[i] = c[i] - 32;
			}
			j = 0;
		}
		if ((c[i] == ' ') || (c[i] == '\t') || (c[i] == '\n') ||
				(c[i] == ',') || (c[i] == ';') ||
				(c[i] == '.') || (c[i] == '!') || (c[i] == '?') ||
				(c[i] == '"') || (c[i] == '(') || (c[i] == ')') ||
				(c[i] == '{') || (c[i] == '}'))
		{
			j = 1;
		}
		i++;
	}
	return (c);
}
