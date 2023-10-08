#include "main.h"

/**
 * _calloc - Allocates and initializes memory for an array
 * @nmemb: number of elements to allocate
 * @size: byte size of each element
 *
 * Return: void pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (!nmemb || !size)
		return (NULL);
	calloc = malloc(nmemb * size);
	if (!calloc)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		calloc[nmemb] = 0;
	return (calloc);
}
