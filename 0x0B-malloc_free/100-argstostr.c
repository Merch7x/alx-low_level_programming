#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates all arguements of a program
 * @ac: count of arguments
 * @av: array of arguements
 * Return: return an concatenated string
 */
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, total_length = 0;
char *new_string;

if (ac == 0 || av == NULL)
{
	return (NULL);
}

for (i = 0; i < ac; i++)
{
	total_length += strlen(av[i]);
}
new_string = (char *) malloc(sizeof(char) * (total_length + ac + 1));

if (new_string == NULL)
{
	return (NULL);
}

for (i = 0; av[i] != NULL && *av[i] != '\0'; i++)
{
	for (j = 0; j < i; j++)
	{
		if (av[i] != NULL)
		{
			new_string[j] = *av[i];
		}
	}
}

return (new_string);
}

