#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function.
 *@str: string
 * Return: char.
 */
char *_strdup(char *str)
{
	int b;
	int i;
	char *a;

	i = 0;
	if  (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (b < (i + 1))
	{
		a[b] = str[b];
		b++;
	}
	return (a);
}
