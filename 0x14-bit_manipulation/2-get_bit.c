#include <stdio.h>
/**
 * get_bit - gets the value of a bit at a specified index
 * @n: integer to convert to binary
 * @index: index of bit
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
n = ((n >> index) & 1);
return (n);
}
