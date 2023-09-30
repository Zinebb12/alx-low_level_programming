#include "main.h"
/**
 * sqrt_n - Makes evaluate from 1 to n
 * @a: same num as n
 * @b: number that iterates from 1 to n
 *
 * Return: success 1.
 * On error, -1 is returned, and errno is set appropriate.
 */
int sqrt_n(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt_n(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: success 1.
 * error, -1 is returned, and errno is set appropriate.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_n(n, 1));
}
