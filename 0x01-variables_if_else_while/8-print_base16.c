#include <stdio.h>
/**
 * main - uses putchar to output a given input
 * Return: returns an integer value
 */
int main(void)
{
	char alphabet = 'a';
	char number = '0';

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}	
	putchar('\n');

	return (0);
}
