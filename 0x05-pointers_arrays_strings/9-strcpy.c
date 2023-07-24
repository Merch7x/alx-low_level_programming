/**
 * _strcpy - copy one param to another
 * @dest: destination parameter to copy to
 * @src: source parameter
 * Return: char value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
