#include <stdio.h>
/**
 * main - uses putchar to output a given input
 * Return: returns an integer value
 */
int main(void)
{
	int number = '0';
	int comma = ',';
	int space = ' ';

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number != 9)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');

	return (0);
}
