#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s != '\0')
	{
		return (n += _strlen_recursion(s + 1) + 1);
	}

	return (n);
}

