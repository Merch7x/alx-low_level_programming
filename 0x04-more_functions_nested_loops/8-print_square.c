#include "main.h"
/**
 * print_square - outputs squares to stdout
 * @size: parameter of int value
 * Return: no retrun value
 */
void print_square(int size)
{
	char hash = '#';
	int a = 0, b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(hash);
			}
			_putchar('\n');
			a++;
		}

	}
}
