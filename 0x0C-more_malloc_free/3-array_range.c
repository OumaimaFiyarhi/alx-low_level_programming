#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *@min: int
 *@max: int
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		array[i++] = min++;
	}
	return (array);
}
