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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			return (&(haystack[i]));
		}
	}
	return (NULL);
}

