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

	for (number = '0'; number <= '9';)
	{
		putchar(number);
		for (number = '1'; number <= '9'; number++)
		{
			putchar(comma);
			putchar(space);
		}
		number++;
	}
	putchar('\n');

	return (0);
}
