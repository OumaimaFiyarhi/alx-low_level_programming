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
	char c = 'a';

	while (c <= 'z')
	{	putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
