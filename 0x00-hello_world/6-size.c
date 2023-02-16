#include <stdio.h>

/**
 * main - Entry point
 *
 * this program prints the size of various types of data
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is : %ld\n",sizeof(char));
	printf("Size of an int is : %ld\n",sizeof(int));
	printf("Size of a long int is : %ld\n",sizeof(long));
	printf("Size of a long long int is : %ld\n",sizeof(long long));
	printf("Size of a float is : %ld\n",sizeof(float));
	return (0);
}
