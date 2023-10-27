#include "main.h"
/**
 * set_bit - Sets value of bit to 1 at a given index
 * @n: number to set in
 * @index: unsigned int
 * Return: 1 if success -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
