#include "main.h"
/**
 * puts_half - entry code
 *@str: string
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		i = i / 2;
	}
	else
	{
		i = ((i / 2) + 1);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
