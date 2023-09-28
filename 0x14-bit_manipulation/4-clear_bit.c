#include "main.h"
/**
 * clear_bit - set the value for a bit to 0 at an given index
 * @n: bit value to be changed
 * @index:index of bit value to be changed
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
