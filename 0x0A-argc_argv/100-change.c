#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;
char *endptr;
long int input = 0;
int num_denominations = 0;
int denominations[5];

if (argc != 2)
{
printf("Error\n");
return (1);
}

input = strtol(argv[1], &endptr, 10);
if (*endptr != '\0' || input > INT_MAX || input < INT_MIN)
{
printf("Error\n");
return (1);
}
cents = (int)input;
if (cents <= 0)
{
printf("Error\n", argv[1]);
return (1);
}
denominations[5] = [25, 10, 5, 2, 1];
num_denominations = sizeof(denominations) / sizeof(int);
for (int i = 0; i < num_denominations; i++)
{
while (cents >= denominations[i])
{
cents -= denominations[i];
coins++;
}
}
printf("%d\n", coins);
return (0);
}
