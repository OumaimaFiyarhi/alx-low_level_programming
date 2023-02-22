#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: an entiger
 *
 * Description: 'function that prints the last digit of a number'
 *
 * Return: @n (Success)
 */
int print_last_digit(int n)
{
	int c;

	if (n <= 0)
		{c = n % 10;
		_putchar('0' + c);
		}
	else
		{c = -(n % 10);
		_putchar('0' + c);
		}
return (c);
}
