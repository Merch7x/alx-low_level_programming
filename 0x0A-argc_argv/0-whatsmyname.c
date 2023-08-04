#include <stdio.h>
/**
 * main - prints its name to stdout
 * @argc: counts command line arguments
 * @argv: pointer to arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
