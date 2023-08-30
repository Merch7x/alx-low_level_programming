/**
 * newtonian - uses the newtonian fromula for sqr root
 * @n: int to be get sqr root
 * @x: the guess of the squareroot
 * Return: the nearest guess
 */
int newtonian(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (newtonian(n + 1, x));

}


/**
 * _sqrt_recursion - returns the natural sqroot of n
 * @n: int to eveluate sqroot
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (newtonian(0, n));
}
