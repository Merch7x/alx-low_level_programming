/**
 * _isupper - evaluates whether paramters c is uppercase
 * @c: an interger parameter
 * Return: returns 1 or 0
 */
int _isupper(int c)
{
	int a;

	for (a = 'A'; a < 'Z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);

}
