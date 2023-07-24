#include "main.h"
/**
 * print_rev - reverse string to stdout
 * @s: parameter pointer of type char
 * Return: no return value
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
