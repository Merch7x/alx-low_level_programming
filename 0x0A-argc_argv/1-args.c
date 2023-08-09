#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns parameter count
 * @argc: parameter count
 * @argv: pointer to arguments
 * Return: 1 or 0
 */
int main(int argc, __attribute__((unused)) char  *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

