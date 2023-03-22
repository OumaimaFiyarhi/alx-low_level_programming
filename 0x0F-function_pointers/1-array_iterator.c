#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - prints an integer
 * @array: an array
 * @size: size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
