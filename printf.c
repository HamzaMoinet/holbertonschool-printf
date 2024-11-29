#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: Format string containing the text and format specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printedCount = 0;
	int i;

	if (format == NULL)
		return (0);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;

			if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				printedCount += _putchar(c);
			}
			else if (format[i] == 's')
			{
				printedCount += _putstring(args);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				printedCount += print_dec(args);
			}
			else if (format[i] == '%')
			{
				printedCount += _putchar('%');
			}
			else
			{
				printedCount += _putchar('%');
				printedCount += _putchar(format[i]);
			}
		}
		else
		{
			printedCount += _putchar(format[i]);
		}
	}

	va_end(args);
	return (printedCount);
}
