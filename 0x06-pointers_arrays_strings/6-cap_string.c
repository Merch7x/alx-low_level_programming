/**
 * word_separator - checks if character is word seperator
 * @c: character to be checked
 * Return: return 1 if true 0 is false
 */
int word_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == ';' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}');
}


/**
 * cap_string - makes entire string uppercase
 * @s: array of characters
 * Return: result of the change
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	for (i = 1; s[i] != '\0'; i++)
	{
		if (word_separator(s[i]))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}


