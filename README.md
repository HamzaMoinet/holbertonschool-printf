_printf

Description

This project involves reimplementing the standard Printf function.
It does exactly the same like print characters, strings and numbers.
 
https://private-user-images.githubusercontent.com/168110259/391092734-6f329c9f-4647-41fd-9de9-7a8c06f64485.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MzI4OTE2MTMsIm5iZiI6MTczMjg5MTMxMywicGF0aCI6Ii8xNjgxMTAyNTkvMzkxMDkyNzM0LTZmMzI5YzlmLTQ2NDctNDFmZC05ZGU5LTdhOGMwNmY2NDQ4NS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQxMTI5JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MTEyOVQxNDQxNTNaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1hNGFiMjlmYzI3ODU5ZGQyZWRmMmFjMWJmMDY3ZjdlNjIyMjJlOWMxNjFlYmJlNDcxMTllNTZiOTAzYTcyZjAwJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCJ9.skgCxQFYkrCy5Bn-boXzw_U15Pg9tWszP51PoQXmzp0

Example

#include  "main.h"

int  main(void)
{
    _printf("Hello, %s!\n", "school!");
    _printf("%d\n", 13);
    return (0);

}

output

Hello, school!
13

Compilation

for compile and execute the code, enter this line:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

How to try it

This is the main file to test the print function

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

Authors

Bouvier Guillaume
Moinet Hamza

