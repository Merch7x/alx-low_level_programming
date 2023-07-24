/**
 * _strlen - calculates the lenth of a string
 * @s: pointer of char type
 * Return: an integer value
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

