#include "main.h"
/**
 * print_alphabet - calls a function to print to stdout
 * Return: no return value
 */
void print_alphabet(void)
{
	char a, b = '\n';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar(b);
}
