#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: types of arguements
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argu;
	unsigned int i = 0;
	char *str;

	va_start(argu, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(argu, int));
			break;
		case 'i':
			printf("%d", va_arg(argu, int));
			break;
		case 'f':
			printf("%f", va_arg(argu, double));
			break;
		case 's':
			str = va_arg(argu, char*);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0' && format)
			printf(", ");
		i++;
	}
	va_end(argu);
	printf("\n");
}
