#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief
 *
 */
int (*get_op_func(char *s))(va_list ap)
{
	op_t ops[] = {
			{"c", printf_char},
			{"s", _putstring},
			{"%", printf_percent},
			{NULL, NULL}
	};

	int i = 0;

	while (i < 3)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
