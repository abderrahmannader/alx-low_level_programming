#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *se = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", se, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", se, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", se, va_arg(l, double));
					break;
				case 's':
					st = va_arg(l, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", se, st);
					break;
				default:
					i++;
					continue;
			}
			se = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(l);
}

