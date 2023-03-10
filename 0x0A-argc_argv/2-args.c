#include "main.h"
#include <stdio.h>
/**
 * main - entry code
 * @argc: integer
 * @argv: array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
