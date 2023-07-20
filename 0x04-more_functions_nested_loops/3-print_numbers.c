#include "main.h"
/**
 * print_numbers - prints numbers to stdout
 * Return: returns no value
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
