/**
 * _strncpy - copies string to dest from src
 * @dest: destination string
 * @src: src string
 * @n: index to copy upto
 * Return: copied dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
