#include "main.h"
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
	int checker;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (checker = 1; checker <= n; checker++)
	putchar('');
	_putchar('\n');
	}
}
