#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'FIZZBUZZ'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((((i % 3) == 0) && ((i % 5) != 0))) && ((i != 100)))
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (((((i % 5) == 0) && ((i % 3) != 0))) && ((i != 100)))
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (((((i % 3) == 0) && ((i % 5) == 0))) && ((i != 100)))
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i == 100)
		{
			printf("Buzz");
			putchar('\n');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	return (0);
}
