#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and start with char c
 * @size: size of the array
 * @c: char that the array is starting with
 *
 * Return: pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
