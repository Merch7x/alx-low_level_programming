#include "main.h"
/**
 * more_numbers - outputs numbers to stdout a given n times
 * Return: no return value
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			j++;
		}
		_putchar('\n');
	}
}

