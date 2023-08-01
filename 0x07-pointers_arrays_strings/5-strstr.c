#define NULL ((void *)0)
/**
 * _strstr - locates a substring
 * @haystack: string to look for substring
 * @needle: substring
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (j = 0; needle[j] != '\0'; j++)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i])
			{
				return (&(haystack[i]));
			}
		}
	}
	return (NULL);
}

