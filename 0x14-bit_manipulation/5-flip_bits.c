#include "main.h"
/**
 * flip_bits - Number of bits that we need to flip
 * @n: long int
 * @m: unsigned int
 * Return: numbr of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fire = 0, wall;

	wall = n ^ m;
	while (wall > 0)
	{
		if (wall & 1)
		{
			fire++;
		}
		wall >>= 1;
	}
	return (fire);
}
