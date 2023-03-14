

#include "main.h"
#include <stdlib.h>
/**
 * lenstr - entry code
 * @s: string
 *
 * Return: int.
 */
int lenstr(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - entry code
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, a, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = lenstr(s1) + lenstr(s2);
	str = malloc(sizeof(char) * a + 1);
	i = 0;
	j = 0;
	while (i < lenstr(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i <= a)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
