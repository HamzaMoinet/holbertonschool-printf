#include <unistd.h>

/**
* _putstring - write string to stdout
* @str: The character to print
* Return: number of char printed
*/
int _putstring(char *str)
{
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
