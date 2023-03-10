#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -takes variable inputs and prints them
 * @format: formats of each input type
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *str, *sep;
	unsigned int i = 0;
	va_list inputs;

	va_start(inputs, format);

	while (format && format[i])
	{
		sep = ", ";

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(inputs, int));
				break;
			case 'i':
				printf("%i", va_arg(inputs, int));
				break;
			case 'f':
				printf("%f", va_arg(inputs, double));
				break;
			case 's':
				str = va_arg(inputs, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				sep = "";
				break;
		}
		if (format[i + 1] && sep)
			printf("%s", sep);
		i++;
	}

	va_end(inputs);

	putchar(10);
}
