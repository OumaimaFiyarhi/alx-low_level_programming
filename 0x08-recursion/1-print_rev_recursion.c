#include "main.h"
/**
 * _print_rev_recursion - entry code
 *@s: string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
