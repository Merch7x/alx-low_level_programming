#include "main.h"
/**
 * puts2 - prints chars to stdout
 * @str: pointer parameter of char value
 * Return: returns nothing
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}

