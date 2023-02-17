#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'putchar to all numbers bellow 10'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = '0';
	char b = 'a';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}
	while (b <= 'f')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);
}
