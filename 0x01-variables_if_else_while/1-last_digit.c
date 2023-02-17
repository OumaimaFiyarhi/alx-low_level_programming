#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * 
 * Description: 'if statement code'
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int last_digit, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	}
	else 
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
