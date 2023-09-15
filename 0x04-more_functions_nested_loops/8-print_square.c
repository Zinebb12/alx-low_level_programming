#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */
void	print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
	for (column = 1; column <= size; column++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
}
