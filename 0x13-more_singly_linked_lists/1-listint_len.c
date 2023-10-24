#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: pointer to a structure
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
