/**
 * string_toupper - change string to uppercase
 * @s: string to be chnaged
 * Return: updated string
 */
char *string_toupper(char *s)
{
	int i = 0, a;

	while (a < 'Z')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		a++;
	}

	return (s);
}

