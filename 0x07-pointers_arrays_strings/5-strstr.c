#define NULL ((void *)0)
/**
 * _strstr - locates a substring
 * @haystack: string to look for substring
 * @needle: substring
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i])
		{
			k = i;

			while (needle[j] != '\0' && haystack[k] == needle[j])
			{
				j++;
				k++;
			}

			if (needle[j] == '\0')
			{
				return (&(haystack[i]));
			}

			j = 0;
		}

	}
	return (NULL);
}

