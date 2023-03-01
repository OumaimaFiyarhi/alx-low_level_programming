#include "main.h"
/**
 * reverse_array - entry code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int c;

	j = n - 1;
	while (i < j)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		i++;
		j--;
	}
}
