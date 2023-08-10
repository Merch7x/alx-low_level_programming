#include <stdio.h>
#include <stdlib.h>
/**
 * string_length - checks length of string
 * @s1: parameter 1
 * @s2: paramter 2
 * Return: lenth of combined strings
 */
unsigned int string_length(char *s1, char *s2)
{
	unsigned int len = 0, count1 = 0, count2 = 0;

	while (*s1 != '\0')
	{
		count1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		count2++;
		s2++;
	}
	len = count1 + count2 + 1;
	return (len);
}
/**
 * s2_length - check the lenght of s2
 * @s2: string to check for lenght
 * Return: length of s2
 */
unsigned int s2_length(char *s2)
{
	unsigned int count = 0;

	while (*s2 != '\0')
	{
		count++;
		s2++;
	}
	return (count);
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
	unsigned int j = 0, i = 0;
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new_string = malloc(sizeof(*new_string) * string_length(s1, s2));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n && s1[i] != '\0'; i++)
	{
		new_string[i] = s1[i];
	}
	if (n >= s2_length(s2))
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
