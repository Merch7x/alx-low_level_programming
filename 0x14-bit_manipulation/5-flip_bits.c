#include "main.h"
/**
 * flip_bits - returns number of bits needed to resemble m fron n
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(const unsigned long int n, const unsigned long int m)
{
unsigned long int dif_in_bits = n ^ m;
unsigned int count = 0;

if (n == m)
{
return (0);
}
while (dif_in_bits)
{
  if (dif_in_bits & 1)
  {
    count++;
  }
  dif_in_bits >>= 1;
}
return (count);
}


