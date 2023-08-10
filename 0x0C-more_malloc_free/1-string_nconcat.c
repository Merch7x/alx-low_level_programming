#include <stdio.h>
#include <stdlib.h>
/**
 * check_null - checks if null is passed as param
 * @s1: parameter 1
 * @s2: paramter 2
 * Return: nothing
 */
char check_null(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	
	if (s2 == NULL)
	{
		s2 = "";
	}
	return (s1) && (s2);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s to concatenate
 * Return: pointer of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, i = 0, len = 0;
	char *new_string;

	check_null(s1, s2);

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	len = i + j + 1;
	new_string = malloc(sizeof(*new_string) * len);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n && s1[i] != '\0'; i++)
	{
		new_string[i] = s1[i];
	}
	if (n >= j)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			new_string[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n && s2[j] != '\0'; j++)
		{
			new_string[i + j] = s2[j];
		}
	}
	new_string[i + j] = '\0';
	return (new_string);
	free(new_string);
}
