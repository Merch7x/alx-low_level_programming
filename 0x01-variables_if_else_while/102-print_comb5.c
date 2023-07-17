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
	int num4 = '0';

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				for (num4 = '0'; num4 <= '9'; num4++)
				{
					if (num4 + num3 > num + num2 && num3 >= num)
					{
						putchar(comma);
						putchar(space);
						putchar(num);
						putchar(num2);
						putchar(space);
						putchar(num3);
						putchar(num4);
					}
				}
			}
		}
	}


	putchar('\n');

	return (0);
}
