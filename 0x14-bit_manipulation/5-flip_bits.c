#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: number
 * @m: number
 * Return:  number of bits you would need to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*Xor of two numbers to get the bit difference*/
	unsigned long int xor_result = n ^ m;
	/*variable count to keep track of the number flipped*/
	unsigned int count = 0;

	/*counting the number of set bits in xor result*/
	while (xor_result)
	{
		/*increment count if the least significant bit of xor_result is 1*/
		count = count + (xor_result & 1);
		/*right shift to chack the next bit*/
		xor_result = xor_result >> 1;
	}
	return (count);
}
