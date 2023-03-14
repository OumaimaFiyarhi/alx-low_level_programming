#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry code
 *@width: int
 *@height: int
 *Return: int
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int*) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			s[i][j] = 0;
			j++;
		}
		i++;
	}
	return (s);
}
