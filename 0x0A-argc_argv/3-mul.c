/**
 * main - multiply arguments
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 1 or 0
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int res = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}


