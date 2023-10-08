#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *flag;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	flag = malloc(sizeof(int) * size);

	if (flag == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		flag[i] = min++;

	return (flag);
}
