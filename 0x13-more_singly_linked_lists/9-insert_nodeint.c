#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function inserting new node.
 * @head: pointer
 * @idx: arg
 * @n: Data of the new node.
 * Return: Address of the new node, or NULL if it fails
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *last = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = last;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (last == NULL || last->next == NULL)
			return (NULL);

		last = last->next;
	}

	new->next = last->next;
	last->next = new;

	return (new);
}
