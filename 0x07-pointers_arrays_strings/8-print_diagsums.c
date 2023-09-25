#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of two diagonals
 * @a: square of matrix
 * @size: size of matrix
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
