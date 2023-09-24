#include "main.h"
/**
 * puts_half - prints half the output to stdout
 * @str: pointer parameter 
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	len = index - 1;

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		_putchar(n);
	}
	_putchar('\n');
}
