#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - variadic function that adds all its parameters
 * @n: number of arguments
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	return (sum);
	va_end(args);
}
