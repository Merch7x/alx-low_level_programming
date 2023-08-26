#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the sum of positive numbers
 * @argc: counts of arguements
 * @argv: array of arguements
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res = 0, i = 1, j;

		for (; i < argc; i++)
		{
			j = 0;
			for (; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	return (0);
}

