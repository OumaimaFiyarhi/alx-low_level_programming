#include "main.h"
/**
 * _isupper - entry code
 *@c: is the entry input
 *Return: 1 if c is uppercase (Success) and 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
