#include "main.h"

/**
 * _puts - is a function that take pointer as parameter
 * @str: pointer to the string to print
 * Return: print a string followed by new line
 */
void _puts(char *str)
{
	while (str != '\0')
	{
	
		_putchar(str + 0);
		str++;
	}
	_putchar('\n');
}
