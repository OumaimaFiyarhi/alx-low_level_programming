#include "main.h"

/**
 * _putstrl - function
 * @s: string
 *
 * return: void
 */
void _putstrl(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: table of strings
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	argc = 0;
	_putstrl(argv[argc]);
	return (0);
}

