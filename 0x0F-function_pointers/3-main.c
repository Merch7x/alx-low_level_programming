#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
int res;
int (*p)(int, int);
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);

p = get_op_func(argv[2]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (p == NULL)
{
printf("Error\n");
exit(99);
}
res = (*p)(num1, num2);
printf("%d\n", res);
return (0);
}
