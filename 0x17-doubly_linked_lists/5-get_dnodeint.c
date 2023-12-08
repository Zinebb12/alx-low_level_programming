#include "lists.h"
#include <stdlib.h>
/**
 *get_dnodeint_at_index - returns the nth node of DDL
 *@head: head of the current DDL
 *@index:index of the node
 *Return:address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
