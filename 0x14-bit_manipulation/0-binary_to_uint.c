#include "main.h"
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: poiter to a string of 0 and 1 characters
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

/* in case the string has a null value */
	if (b == NULL)
	{
		return (0);
	}
/*looping over the string*/
	while (b[i] != '\0')
	{
		/*if the character is 0 or 1 */
		if (b[i] == '1' || b[i] == '0')
		{
			/*left-shift the number*/
			n = n << 1;
			/*if it's a 1 add it to the number*/
			if (b[i] == '1')
			{
				n += 1;
			}
			i++;
		}
		/*if the character isn't 0 nor 1*/
		else
		{
			return (0);
		}
	}
	return (n);
}
