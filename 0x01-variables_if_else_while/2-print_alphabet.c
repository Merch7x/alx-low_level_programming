#include <stdio.h>
/**
 * main - uses putchar to output a given input
 * Return: returns an integer value
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
