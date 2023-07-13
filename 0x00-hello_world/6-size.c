#include<stdio.h>
/**
 * main - prints sizeof various data types to stdout
 * Return: returns an integer value
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zi byte(s)\n", sizeof(int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(double));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
