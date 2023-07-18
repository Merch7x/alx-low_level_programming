/**
 * _islower - evaluates int c
 * @c: expects a value
 * Return: an integer value
 */
int _islower(int c)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
