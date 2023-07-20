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

				if (j < 9 )
				{
					if ((result < 8 || (j == 8 && i == 1)) && (i < 5 || result == 0))
					{
						_putchar(c);
						_putchar(s);
						_putchar(s);
					}
					else
					{
						_putchar(c);
						_putchar(s);
					}
				}
			}
			else if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');

				if (j < 9)
				{
					_putchar(c);
					_putchar(s);
				}
			}
			j++;

		}
		_putchar(n);
		i++;
	}
}

