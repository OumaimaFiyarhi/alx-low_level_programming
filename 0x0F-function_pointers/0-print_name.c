#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
