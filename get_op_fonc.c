#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - select the correct function
 * @s: string of get p function
 * Return: Integer and function
 */
int (*get_op_func(char *s))(va_list ap)
{
	op_t ops[] = {
			{"c", printf_char},
			{"s", _putstring},
			{"%", printf_percent},
			{"d", print_dec},
			{"i", print_dec},
			{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
