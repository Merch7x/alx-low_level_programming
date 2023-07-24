#include "main.h"
/**
 * rev_string - reverses an array
 * @s: pointer parameter
 * Return: nothing to return
 */
void rev_string(char *s)
{
	int i = 0, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;

	while (i >= 0)
	{
		_putchar(s[len]);
		i--;
	}
}
