#include <stddef.h>
/*
 * _strchr - locates character in string
 * @s: array pointer
 * @c: character to be found
 * Return: pointer to c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return &(s[i]);
		}
		i++;
	}

	return (NULL);
}


