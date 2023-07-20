#include "main.h"
/**
 * print_most_numbers - prints select numbers to stdout
 * Return: returns no value
 */
void print_most_numbers(void)
{
	int i, two = '2', four = '4';

	for (i = '0'; i <= '9'; i++)
	{
		if (i != two && i != four)
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
