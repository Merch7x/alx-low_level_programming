/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy to
 * Return: a pointer of the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, dlen = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	dlen = j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}

	dest[dlen + i] = '\0';

	return (dest);
}
