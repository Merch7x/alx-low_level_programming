#include "main.h"
/**
 * _puts - prints to stdout
 * @str: pointer of char type
 * Return: no return value
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

