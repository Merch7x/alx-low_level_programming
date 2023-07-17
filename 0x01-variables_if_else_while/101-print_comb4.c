#include <stdio.h>
/**
 * main - uses putchar to output a given input
 * Return: returns an integer value
 */
int main(void)
{
	int num = '0';
	int space = ' ';
	int comma = ',';
	int num2 = '0';
	int num3 = '0';

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				if (num2 > num && num3 > num2)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);

					if (num >= '0' && num < '7')
					{
						putchar(comma);
						putchar(space);
					}
				}


			}
		}
	}

	putchar('\n');

	return (0);
}
