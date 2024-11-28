#include <stdarg.h>
#ifndef _PRINTF
#define _PRINTF
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(va_list ap);
} op_t;
int (*get_op_func(char *s))(va_list ap);
int printf_char(va_list ap);
int _putstring(va_list ap);
int printf_percent(va_list ap);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
