#include "main.h"
/**
 * print_sign - evaluates parameter n
 * @n: is returned as a value
 * Return: returns an integer value
 */
int print_sign(int n)
{
	int a = 0;
	char p = '+', z = '0', m = '-';

	if (n > a)
	{
		_putchar(p);
		return (1);
	}
	else if (n == a)
	{
		_putchar(z);
		return (0);
	}
	else
	{
		_putchar(m);
		return (-1);
	}
}
