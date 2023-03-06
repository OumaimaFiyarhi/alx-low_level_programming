#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry code
 * @a: array
 * @size: array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (j == i)
			{
				s1 += a[i * size + j];
			}
			if (i == ((size - 1) - j))
			{
				s2 += a[i * size + j];
			}
			j++;
		}
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
