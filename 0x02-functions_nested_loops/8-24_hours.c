#include "main.h"
/**
 * jack_bauer - prints out chars to stdout
 * Return: no return value
 */
void jack_bauer(void)
{
	int a, b, c = ':', d, e, f = '\n';

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= (a == '2' ? '3' : '9'); b++)
		{
			for (d = '0'; d <= '5'; d++)
			{
				for (e = '0'; e <= '9'; e++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(c);
					_putchar(d);
					_putchar(e);
					_putchar(f);
				}
			}
		}
	}
}

