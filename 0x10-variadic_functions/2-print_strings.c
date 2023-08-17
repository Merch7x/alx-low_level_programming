#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: to be printed between the lines
 * @n: count of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);
		printf("%s", value);

		if (value == NULL)
		{
			printf("nil");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
