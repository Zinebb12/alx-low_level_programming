#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: argument
 * Return: unsigned int with decimal value of binary number, or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int something = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		something = (something << 1) + (b[i] - '0');
		i++;
	}
	return (something);
}
