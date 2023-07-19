#include "main.h"
/**
 * times_table - outputs a multiplication table
 * Return: no return value
 */
void times_table(void)
{
	int i = 0, j, result;
	char c = ',', s = ' ', n = '\n';

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;

			if (result <= 9)
			{
				_putchar(result + '0');
				_putchar(s);
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			j++;

			if (j <= 9)
			{
				_putchar(c);
				_putchar(s);
			}
		}

		_putchar(n);
		i++;
	}

}

