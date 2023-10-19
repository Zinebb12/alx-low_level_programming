#include "lists.h"
/**
 * list_len - function that returns the number
 * of elements
 * @h: pointer to the list
 *
 * Return: list len
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL && h->str != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
