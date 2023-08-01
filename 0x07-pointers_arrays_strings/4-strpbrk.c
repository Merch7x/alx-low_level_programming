#define NULL ((void *)0)
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be search
 * @accept: bytes to be searched
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				return (&(s[i]));
			}
		}
	}
	return (NULL);
}

