#include <stdio.h>
/**
 * my_name - prints a name
 * @name: name to be printed out
 * Return: Nothing
 */
void my_name(char *name)
{
	printf("%s\n", name);
}
/**
 * print_name - prints name from pfn
 * @name: name to be printed
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f = my_name;
	f(name);
}

