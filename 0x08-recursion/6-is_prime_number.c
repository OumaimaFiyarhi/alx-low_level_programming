#include "main.h"
/**
 *prime - entry code
 *@n: integer
 *@i: integer
 * Return: Always 0.
 */
int prime(int n, int i)
{
	if ((i < n) && ((n % i) == 0))
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - entry code
 *@n: integer
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
