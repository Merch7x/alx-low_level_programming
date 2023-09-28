#include "main.h"
/**
 * binary_to_uint - converts a binary number to an int
 * @b: pointer to binary number
 * Return: converted unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int len = 0, base = 1;

if (!b)
{
return (0);
}
while (b[len] != '\0')
{
len++;
}

while (len)
{
if (b[len - 1] != '0' && b[len - 1] != '1')
{
return (0);
}
res += (b[len - 1] - '0') * base;
base *= 2;
len--;
}
return (res);
}

