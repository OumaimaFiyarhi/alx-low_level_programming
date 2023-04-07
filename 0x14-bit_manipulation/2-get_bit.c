#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: starts at 0
 * Return: index at success or -1 if en error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int p = 1;

	/* make sure index is within bounds*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*shifting */
	if (n & (p << index))
	{
		return (1);
	}
	return (0);
}
