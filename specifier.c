#include "main.h"
#include <stddef.h>

/**

get_function - Finds the function pointer for a given specifier
@spec: Format specifier character
Return: Function pointer corresponding to the specifier, or NULL*/
void (get_function(char spec))(int, int)
{
    / Define the table of specifiers /
    typedef struct op
    {
        char op;
        void (f)(int, int);
    } op_t;

    op_t specifiers[] = {
        {'c', printf_char},
        {'s', printf_string},
        {'%', printf_percent},
        {0, NULL} /* End marker */
    };

    int i;

    / Loop through the table to find a match /
    for (i = 0; specifiers[i].op; i++)
    {
        if (specifiers[i].op == spec)
        {
            return (specifiers[i].f);
        }
    }

    return (NULL);
}
