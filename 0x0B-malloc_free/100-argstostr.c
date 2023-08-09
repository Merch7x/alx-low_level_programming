#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all arguements of a program
 * @ac: count of arguments
 * @av: array of arguements
 * Return: return an concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	new_string = (char *) malloc(sizeof(char *) * ac);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; *av[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			new_string[j] = *av[i];
			printf("%s\n", new_string);
		}
	}
	return (new_string);
	free(new_string);
}

