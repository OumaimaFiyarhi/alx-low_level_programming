#include "main.h"
/**
 * print_sign - Entry point
 * @n: is an entiger
 * Description: 'function that prints the sign of a number'
 *
 * Return:  1 if n is greater than 0 (Success) or 0 if it's 0 or -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
		{_putchar('+');
		return (1);
		}
	else if (n == 0)
		{_putchar('0');
		return (0);
		}
	else
		{_putchar('-');
		return (-1);
		}
}
