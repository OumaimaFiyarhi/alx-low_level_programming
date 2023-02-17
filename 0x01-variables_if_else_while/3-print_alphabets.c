#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'putchar to all alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a', b = 'A';

	while (c <= 'z')
	{	putchar(c);
		c++;
	}
	while (b <= 'Z')
	{	putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
