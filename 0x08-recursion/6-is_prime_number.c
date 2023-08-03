/**
 * divisible - checks if n is divisble from start to end
 * @start: start of search
 * @end: end of search int
 * Return: 1 if divisible
 */
int divisible(int n, int start, int end)
{
	if (start > end)
	{
		return (0);
	}

	if (n % start == 0)
	{
		return (1);
	}

	return (divisible(n, start + 1, end));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: integer to be checked
 * Return: 1 if n is integer 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!divisible(n, 2, n - 1));
}


