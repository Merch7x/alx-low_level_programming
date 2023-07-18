/**
 * _isalpha - evaluates parameter under conditionals
 * @c: requires a value entry
 * Return: an interger value
 */
int _isalpha(int c)
{
	int a, b, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			for (d = 'A'; d <= 'Z'; d++)
			{
				if ((c != a) && (c == b || c == d))
				{
					return (1);
				}
			}
		}
	}
	return (0);
}
