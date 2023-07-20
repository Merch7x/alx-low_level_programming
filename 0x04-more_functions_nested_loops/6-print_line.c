#include "main.h"
/**
 * print_line - outputs a char to stdout
 * @n: parameter of integer value
 * Return: no return value
 */
void print_line(int n)
{
	char c = '_';
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			_putchar(c);
			a++;
		}
		_putchar('\n');
	}
}

