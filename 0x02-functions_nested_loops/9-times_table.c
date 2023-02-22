#include "main.h"
/**
 * times_table - entry point
 * description: this code prints the 9 times table
 * Return: Always 0.
 */
void times_table(void)
{	int i = 0;
	int r = 0;

	while (i <= 9)
	{	int j  = 0;

		while (j <= 9)
		{
			r = i * j;
			if (j == 0)
			{
				_putchar(r + '0');
			}
			if ((r < 10) && (j != 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((r) + '0');
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		j++;
		}
	_putchar('\n');
	i++;
	}
}
