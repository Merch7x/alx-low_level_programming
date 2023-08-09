#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string to be contatenated to
 * @s2: string to concatenate
 * Return: pointer to new memory location
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}
	len = i + j + 2;
	new_string = malloc(sizeof(char) * len);

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_string[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		new_string[i + j] = s2[j];
	}
	new_string[i + j] = '\0';
	return (new_string);
	free(new_string);
}
