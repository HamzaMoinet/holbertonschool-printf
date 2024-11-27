#include "main.h"
#include <stddef.h>

/**
 * Table of specifiers
 */
void (*get_function(char *spec))(int, int)
{
	specifier_table specifiers[] = {
	{'c', printf_char},
	{'s', printf_string},
	{'%', printf_percent},
	};
}

/**
 * get_function - found the function pointer for a given specifier
 * @spec: format specifier character
 * Return: function pointer corresponding to specifier, or NULL
 */
func_t get_function(char spec)
{
	int i;
	/* Loop through the specifier table to find a match */
	for (i = 0; specifiers[i].specifier; i++)
	{
		if (specifiers[i].specifier == spec) /*check if the speficier match */
		{
			return (specifiers[i].function);
			/* Return the corresponding function pointer */
		}
	}
	return (NULL); /* Return NULL if no match was found */
}
