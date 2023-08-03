/**
 * _pow_recursion - return x raised to y
 * @x: int to be raised
 * @y: power to raise to
 * Return: the raised value
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0 || x == 1)
	{
		return (1);
	}
	res *= x * _pow_recursion(x, y - 1);
	return (res);
}
