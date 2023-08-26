#include "main.h"
/**
 * times_table - outputs a multiplication table
 * Return: no return value
 */
void times_table(void)
{

	int i = 0, j = 0, result = 0;
	char c = ',', s = ' ';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar(result + '0');
			}

			if (result >= 10)
			{
				_putchar(c);
				_putchar(s);
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (result < 10 && j != 0)
			{
				_putchar(c);
				_putchar(s);
				_putchar(s);
				_putchar(result + '0');
			}
		}
		_putchar('\n');

	}
}
