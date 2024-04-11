#include "search_algos.h"
/**
 * linear_search - function name
 * @array: arrgument pointer
 * @size: size of an array
 * @value: target value
 * Return: return the index of a given value
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
