#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * count_args - function that counts how many correct arguments are passed
 * @str: it is format
 * Return: integer
 */
int count_args(const char *str)
{
	int i = 0;
	int count = 0;

	while (str && str[i] != '\0')
	{
		switch (str[i])
		{
			case 'c':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'f':
				count++;
				break;
			case 's':
				count++;
				break;
		}
		i++;
	}
	return (count);
}

/**
 * print_all -  function that prints all types, followed by a new line.
 * @format:  is a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	int count, v;
	va_list args;

	count = count_args(format);
	va_start(args, format);
	while (format && format[i] != '\0')
	{
		v = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				v = 0;
				j--;
		}
		j++;
		if (j != count && v)
		{
			printf(", ");
		}
		i++;
	}
	if ( format != NULL)
	{
		printf("\n");
	}
	va_end(args);
}
