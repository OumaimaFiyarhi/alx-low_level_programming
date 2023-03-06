#include "main.h"
/**
 * _strspn - check the code
 *@s: string
 *@accept: string
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (0);
}
