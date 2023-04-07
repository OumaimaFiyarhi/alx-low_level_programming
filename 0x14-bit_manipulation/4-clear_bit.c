#include "main.h"
/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	/* checks if the index is out of range for given data type*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}	

	/*shiffting 1 left by index*/
	mask = mask << index;

	/*invert mask useing NOT to set a bit at given idx to 0*/
	mask = ~mask;

	/*apply the mask using AND*/
	*n = *n & mask;

	return (1);
}
