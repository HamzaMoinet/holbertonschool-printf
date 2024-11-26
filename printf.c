#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 *
 *
 */

int _printf(const char *format, ...);
{
	va_list args;
	int count = 0;
	int i;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
}
