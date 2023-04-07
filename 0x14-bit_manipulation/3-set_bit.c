#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*create a bit mask by shiffting the value 1 to the left by index bits*/
	unsigned long int mask = 1 << index;

	/*we make sure index is within the range*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/*we then use a bitwise OR operation to set the bit at index to 1*/
	*n = *n | mask;

	/* return 1 to indicate success*/
	return (1);
}
