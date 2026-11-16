#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of the arguments passed to the function
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *str;
	char *sep;

	i = 0;
	sep = "";
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
