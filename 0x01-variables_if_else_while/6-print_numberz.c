#include <stdio.h>
/**
 * main - output a value to stdout
 * Return: returns an integer value
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
