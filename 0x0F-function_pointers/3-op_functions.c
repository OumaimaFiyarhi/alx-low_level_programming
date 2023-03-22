#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - Returns the sum of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The sum of a and b.
*/

int op_add(int a, int b)
{
	int i;

	i = a + b;
	return (i);
}
/**
* op_sub - Returns the difference of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The difference of a and b.
*/

int op_sub(int a, int b)
{
	int i;

	i = a - b;
	return (i);
}
/**
* op_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The product of a and b.
*/

int op_mul(int a, int b)
{
	int i;

	i = a * b;
	return (i);
}
/**
* op_div - Returns the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The quotient of a and b.
*/

int op_div(int a, int b)
{
	int i;

	if (b != 0)
	{
		i = a / b;
		return (i);
	}
	printf("Error\n");
	exit(100);
	return (0);
}
/**
* op_mod - Returns the remainder of the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
	int i;

	if (b != 0)
	{
		i = a % b;
		return (i);
	}
	printf("Error\n");
	exit(100);
	return (0);
}
