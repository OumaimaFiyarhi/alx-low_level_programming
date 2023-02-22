#include "main.h"
/**
 * _abs - Entry point
 * @n: an entiger
 *
 * Description: 'function that computes the absolute value of an integer'
 *
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
		{_putchar(n);
		}
	else if (n < 0)
		{n = -n;
		_putchar(n);
		}
	else
		{_putchar(n);
		}
return (0);
}
