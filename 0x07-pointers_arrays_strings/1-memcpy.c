/**
 * _memcpy - copies n bytes from memory area src to dest
 *  @dest: memory area to copy to
 *  @src: memory area to copy from
 *  @n: number of bytes to copy
 *  Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
