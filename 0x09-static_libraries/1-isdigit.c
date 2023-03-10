#include "main.h"
/**
 * _isdigit - Entry point
 *@c: input
 * Description: 'function that checks for a digit'
 *
 * Return: Always 1 if it's digit (Success) or 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
