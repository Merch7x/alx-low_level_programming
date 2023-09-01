#include "main.h"
/**
 * get_endianness - gets order of bit storage
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
unsigned int num = 1;
unsigned int *ptr = &num;

if (*ptr)
{
return (1);
}
return (0);
}
