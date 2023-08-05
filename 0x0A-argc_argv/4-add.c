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
	int res = 0, i = 1, num = 0;

	if (argc ==  1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else if (num > 0)
			{
				res += num;
			}
		}
		printf("%d\n", res);
	}
	return (0);
}

