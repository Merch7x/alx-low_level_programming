#include "main.h"
/**
 * print_triangles - prints triangles to nth number
 * @size: parameter of int value
 * Return: no return value
 */
void print_triangle(int size)
{
	char hash = '#', s = ' ';
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
			s++;
			a++;
		}
	}
}
