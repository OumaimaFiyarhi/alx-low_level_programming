#include "main.h"
/**
 * _isalpha - Entry point
 * @c: is an entiger
 * Description: 'function that checks for lowercase or uppercase character'
 *
 * Return:  1 if c is lowercase or uppercase (Success) or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{return (1);
		}
	return (0);
}
