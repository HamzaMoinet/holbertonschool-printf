# _Printf

DESCRIPTION

This project involves reimplementing the standard Printf function.
It does exactly the same like print characters, strings and numbers.

```mermaid

flowchart TB
classDef print fill:#f98
classDef quest fill:#9f9
classDef Incr fill:#bbf

A((Start)) --> B[Declare variables]
style A fill:#0f0
style End fill:#f00

B:::print --> C[/String input/]

C --> D{Is NULL ?} -- Yes --> E[Return -1] --> End((End))
E:::print
D:::quest -- No --> F[Parse through the string]

F:::print --> G{Is '\0' char ?}

G:::quest -- Yes --> H[Return string count] --> End
H:::print
G -- No --> I{is '%' Char ?}

I:::quest -- Yes --> J[Check Next Character]

I -- No --> K[Print Character]

K --- Inc[[increment count]]

K --> F

J:::print --> Form{Is a Format Specifier ?}

Form:::quest -- Yes --> Arg[Start function of argument] --- M[[Increment count]]
M:::Incr
Inc:::Incr
Form -- No --> K:::print

Arg:::print --> F

```

## Example



```bash
  #include "main.h"

int main(void) { _printf("Hello, %s!\n", "school!"); _printf("%d\n", 13); return (0);


output

Hello, school! 13
```

# Compilation

for compile and execute the code, enter this line:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

# How to try It

This is the main file to test the print function

```bash
  #include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
## Authors

- [@BvrGuillaume](https://www.github.com/BvrGuillaume)
- [@HamzaMoinet](https://www.github.com/HamzaMoinet)
