#include "main.h"
/**
 * print_last_digit - evaluates an int parameter
 * @a: requires an int value
 * Return: returns value of the result
 */
int print_last_digit(int a)
{
	int result;

	result = a % 10;

	if (result < 0)
	{
		result = -result;
	}
	_putchar(result + '0');
	return (result);

}
