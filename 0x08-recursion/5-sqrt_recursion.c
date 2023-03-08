#include "main.h"
/**
 *recursion - entry code
 *@n: integer
 *@guess: integer
 * Return: integer
 */
int recursion(int n, int guess)
{       int new_guess;

        if ((guess * guess) == n)
        {
                return (guess);
        }
        if ((guess * guess) > n)
        {
                return (-1);
        }
        new_guess = guess + 1;
        return (recursion(n, new_guess));
}
/**
 * _sqrt_recursion - entry code
 *@n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (recursion(n, 1));
}
