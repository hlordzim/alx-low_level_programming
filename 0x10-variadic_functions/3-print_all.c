#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list prta;
	char *separator = "";
	int i = 0;

	va_start(prta, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(prta, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(prta, int));
			break;
		case 'f':
			printf("%s%f", separator, (float)va_arg(prta, double));
			break;
		case 's':
			{
				char *str = va_arg(prta, char *);
					if (str == NULL)
					{
						printf("%s(nil)", separator);
					}
					else
					{
						printf("%s%s", separator, str);
					}
				break;
				}
		default:
			break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(prta);
}
