#include "main.h"
/**
 * print_diagonal - outputs a char to stdout
 * @n: prameter with an integer value
 * Return: no return value
 */
void print_diagonal(int n)
{
	char c = '\\';
	int a = 0, b = 0;

	if ( n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			while (b < n)
			{
				_putchar(c);
				_putchar('\n');
				b++;
			}
			a++;
		}
		
	}
}
