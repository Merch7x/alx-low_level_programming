#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums prarmaters
 * @n: count of parameters
 * Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int  i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
