#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints character
 * @args: character argument
 *
 */
void printf_char(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
}

/**
 * printf_percent: print modulos
 *
 * 
 */
void printf_percent(va_list ap)
{
	int i = va_arg(ap, int);
	if (i == 37)
		_putchar(37);
}
