#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char *);
		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(args);
}
