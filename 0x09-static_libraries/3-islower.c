#include "main.h"
/**
 * _islower - Entry point
 * @c: is an entiger
 * Description: 'function that checks for lowercase character'
 *
 * Return:  1 if c is lowercase (Success) or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		{return (1);
		}
	return (0);
}
