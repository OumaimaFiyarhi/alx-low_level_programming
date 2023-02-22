#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - is printing all aphabets
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
