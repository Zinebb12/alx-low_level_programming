#include "main.h"
/**
* print_most_numbers - print number from zero to nine
* Return: print a range of number from 0 to 9 and not include 2 and 4
*/
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
	if (a != 50 && a != 52)
	_putchar(a);
	}
	_putchar('\n');
}
