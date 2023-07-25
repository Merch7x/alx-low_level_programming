#include "main.h"
/**
 * rev_string - reverses an array
 * @s: pointer parameter
 * Return: nothing to return
 */
void rev_string(char *s)
{
	int i = 0, len = 0, j = 0;
	char t;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;


	while (i >= j)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
		j++;
		i--;
	}
}

