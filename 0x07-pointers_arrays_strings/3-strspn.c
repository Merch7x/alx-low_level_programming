/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: parametr of type char
 * Return: number of bytes in intial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return count;
		}
	}
	return (count);

}

