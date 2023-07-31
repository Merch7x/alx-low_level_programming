#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *  @s: string
 *  @c: character to be located
 *  Return: a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *j = NULL;	

	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return (&(s[i]));
		}
		i++;
	}
	return (j);
}

