#include "main.h"
#include <stdio.h>
/**
 * main - entry code
 * @argc: integer
 * @argv: table of arguments
 * Return: always an int
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
