/**
 * _isdigit - evaluates whether a parameter is a digit
 * @c: parameter of int value
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
