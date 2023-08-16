#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name to be printed
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		exit(1);
	}
}

