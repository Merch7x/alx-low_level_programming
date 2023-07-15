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

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num >= '0' && num < '9')
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');

	return (0);
}
