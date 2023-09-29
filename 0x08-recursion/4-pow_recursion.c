#include "main.h"

/**
 * _pow_recursion - power with recursive
 * @x: The base number.
 * @y: The power times of multiple.
 * Return: The power of @x and @y.
 */
int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

