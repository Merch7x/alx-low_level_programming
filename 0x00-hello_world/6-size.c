#include<stdio.h>
/**
 * main - prints sizeof various data types to stdout
 * Return: returns an integer value
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(double));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
