#include <stdio.h>
/**
 * main - outputs a value to stdout
 * Return: returns an integer value
 */
int main(void)
{
	char A = 'A', a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
