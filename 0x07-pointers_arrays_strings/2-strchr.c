#define NULL ((char *)0)
/**
 * _strchr - locates a character in a string
 *  @s: string
 *  @c: character to be located
 *  Return: a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

