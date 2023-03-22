#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
/**
* get_op_func - Selects the correct function to perform
*the operation asked by the user.
* @s: The operator passed as argument.
*
* Return: A pointer to the function corresponding
*         to the operator given as a parameter.
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
