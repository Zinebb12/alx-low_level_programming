#include "lists.h"
/**
 * dlistint_len -find the number of elemnts in a DDL
 * @h: head of the linked list
 * Return: the number of elements in a DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements;

	num_of_elements = 0;
	while (h)
	{
		h = h->next;
		num_of_elements = num_of_elements + 1;
	}
	return (num_of_elements);
}
