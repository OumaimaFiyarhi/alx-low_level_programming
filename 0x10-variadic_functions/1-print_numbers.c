#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator:  is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
