#ifndef printf
#define printf
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int _printf(const char *format, ...);
int _putchar(char c);
int _putstring(char *s);

#endif
