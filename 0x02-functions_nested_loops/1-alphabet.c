#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet to stdout
 * Return: does not return anything
 */
void print_alphabet(void)
{
	char a, b = '\n';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar(b);
}
/**
 * main - outputs th result of print_alphabet
 * Return: an integer value
 */
int main(void)
{
	print_alphabet();
	return (0);
}
