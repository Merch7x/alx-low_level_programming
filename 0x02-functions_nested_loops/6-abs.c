/**
 * _abs - evaluates an int value
 * @a: refers to an int value
 * Return: returns the value
 */
int _abs(int a)
{
	int result;

	if (a >= 0)
	{
		result = a;
	}
	else
	{
		result = a * -1;
	}
	return (result);
}

