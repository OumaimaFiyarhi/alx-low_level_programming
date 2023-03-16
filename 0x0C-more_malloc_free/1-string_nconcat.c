#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates lenth of a string
 *@str: string
 * Return: number of bytes of the string given
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - entry code
 *@s1: first string
 *@s2: second string to concatenate
 *@n: integer of bytes os s2 to concatenate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a, b;
	unsigned int i, j, sum;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _strlen(s1);
	j = _strlen(s2);
	if (n < j)
	{
		j = n;
	}
	sum = i + j;
	s3 = malloc(sizeof(char) * (sum + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (s1[a] != '\0')
	{
		s3[a] = s1[a];
		a++;
	}
	b = 0;
	while (b < j)
	{
		s3[a++] = s2[b++];
	}
	s3[a] = '\0';
	return (s3);
}
