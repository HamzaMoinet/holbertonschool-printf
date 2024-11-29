#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *printf_char - prints character
 *@ap: character argument
 *Return: nombre de caractère a imprimé
 */
int printf_char(va_list ap)
{
	char c = va_arg(ap, int);
	{
	_putchar(c);
	return (1);
	}
}
/**
 *_putstring - print a string
 *@ap: charactère argument
 *Return: nombre de caractère a imprimé
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
 * printf_percent - print modulos
 *@ap: charatere argument
 *Return: nombre de caractère a imprimé
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
/**
 *print_dec - print decimal et integers
 *@ap: caractere argument
 *Return: nombre de caractère a imprimé
 */
int print_dec(va_list ap)
{
	int n = va_arg(ap, int), count = 0, i = 0;
	int buffer[12];
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num = n;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}
	return (count);
}
