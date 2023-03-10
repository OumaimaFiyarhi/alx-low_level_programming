#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _is_digits - checking code
 * @s: strings
 * Return: always an int
 */
int _is_digits(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!((s[i] >= '0') && (s[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - entry code
 * @argc: integer
 * @argv: table of arguments
 * Return: always an int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (_is_digits(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
