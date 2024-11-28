#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints character
 * @args: character argument
 *
 */
int printf_char(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
		return (1);
}
/**
 * print_string
 *
 * @param ap
 */
int _putstring(va_list ap)
{
	int count = 0;
	int i;
	char *str = va_arg(ap, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
/**
 * printf_percent: print modulos
 *
 *
 */
int printf_percent(va_list ap)
{
	int i = va_arg(ap, int);
	{
	if (i == 37)
		_putchar(37);
	}
	return (1);
}
