/**
 * _strcat - appaends src string to dest string
 * @dest: string to be appended to
 * @src: source string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, dlen = 0;


	while (dest[j] != '\0')
	{
		j++;
	}

	dlen = j;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}

	dest[dlen + i] = '\0';
	return (dest);
}




