#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator:  is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(ni)l");
		}
		else
		{
			printf("%s", s);
		}
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
		if (s  == NULL)
		{
			printf("(ni)l");
		}
	}
	printf("\n");
	va_end(args);
}
