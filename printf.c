#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int printedCount = 0;

	char i = 0;
	
	va_start(ap, format);
	if (*format == NULL)
	{
		va_end(ap);
		return (-1);
	}

	for (format && format[i] != '\0'; i++)
	{
		if (*format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				int count = _putchar(c);

					printedCount = count + printedCount;
			}
			else if (format[i] == 's')
			{

				int count = _putstring(args);

					printedCount = count + printedCount;
			}
			else
			{
				int count = _putchar(format[i]);

					printedCount = count + printedCount;
			}
			if (format[i] == 'd' || format[i] == 'i')
			{
				int count = print_dec(format[i]);

				printedCount = count + printedCount;
			}
		}
		else
		{
			int count = _putchar(format[ia]);

				printedCount = count + printedCount;
		}
	}
	va_end(ap);

	return (printedCount);
}
