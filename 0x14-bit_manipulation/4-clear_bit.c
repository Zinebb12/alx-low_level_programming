#include "main.h"
/**
 * clear_bit - clean the value of a bit to 0
 * @n: pointer to a number
 * @index: unsigned int
 * Return: 1 if succeed, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
