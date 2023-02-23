#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: 'print_most_numbers'
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if ((c != 2) && (c != 4))
		{
			_putchar(c + '0');
			c++;
		}
		else
		{
			c++;
		}
	}
	_putchar('\n');
}
