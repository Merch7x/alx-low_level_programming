/**
 * _memset - fills the first n bytes of the memory area
 * @s: points to the memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[0 + i] = b;
		i++;
	}
	return (s);
}


