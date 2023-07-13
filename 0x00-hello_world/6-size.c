#include<stdio.h>
/**
 * main - prints sizeof various data types to stdout
 * Return: returns an integer value
 */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(double));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
