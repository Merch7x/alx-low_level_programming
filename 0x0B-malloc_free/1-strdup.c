#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies an existing string in new memory
 * @str: string copy
 * Return: pointer to newly allocate dspace in memory
 */
char *_strdup(char *str)
{
	int i = 0, len;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	len = i + 1;

	new_string = malloc(sizeof(char) * len);

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		new_string[i] = str[i];
	}

	if (sizeof(new_string) != sizeof(str))
	{
		return (NULL);
	}
	return (new_string);
	free(new_string);
}
