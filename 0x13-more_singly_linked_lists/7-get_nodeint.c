#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list
 * @head: pointer to the list
 * @index: index argument
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
		return (NULL);
	for (node = 0; node < index; node++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
