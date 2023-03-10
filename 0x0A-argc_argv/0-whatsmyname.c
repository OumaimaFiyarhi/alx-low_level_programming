#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

