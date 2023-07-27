/**
 * cap_string - makes entire string uppercase
 * @s: array of characters
 * Return: result of the change
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '.' || s[i] == ' ')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == '.' && s[i + 1] == ' ')
		{
			s[i + 2] -= 32;
		}
		else if (s[i] == '!' || s[i] == '?')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == ',' || s[i] == ';')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == '"' || s[i] == '	')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == '\n' || s[i] == '(')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == ')' || s[i] == '{')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == '}')
		{
			s[i + 1] -= 32;
		}
		else if (s[i] == 0)
		{
			s[i] -= 32;
		}
	}
	return (s);
}


