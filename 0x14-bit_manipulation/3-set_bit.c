#include "main.h"
/**
 * set_bit - set the value of abit at a specified index
 * @n: integer to set the bit
 * @index: of the bit to set value
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
