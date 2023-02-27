#include "main.h"
/**
 * rev_string - entry code
 *@a: character
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	i = 0;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
