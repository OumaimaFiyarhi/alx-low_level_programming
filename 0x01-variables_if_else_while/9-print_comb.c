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
	int c = '0';

	while (c <= '9')
	{
	putchar(c);
		if (c < '9')
		{
		putchar(',');
		putchar(' ');
		}
	c++;
	}
	putchar('\n');
	return (0);
}
