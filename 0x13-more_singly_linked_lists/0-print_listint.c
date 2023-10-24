#include "lists.h"
/**
 * print_listint - Entry point
 * @h: point to  structures
 * Return:return the number of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);

}
