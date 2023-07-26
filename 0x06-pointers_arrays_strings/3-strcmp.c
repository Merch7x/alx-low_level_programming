/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an int value of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		i++;
		j++;
	}

	len = i + j;

	for (i = 0; i < len; i++)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

