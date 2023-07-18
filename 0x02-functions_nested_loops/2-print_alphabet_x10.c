#include "main.h"
/**
 * print_alphabet_x10 - outputs the alphabet a given n times
 * Return: does not return anything.
 */
void print_alphabet_x10(void)
{
	char a, b = '\n';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar(b);
	}
}
