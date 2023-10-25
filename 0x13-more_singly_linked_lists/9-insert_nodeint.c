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
	listint_t *new_nd, *last;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	last = *head;
	for (; i < idx - 1 && temp != NULL; i++)
		last = last->next;
	if (last == NULL)
		return (NULL);
	}
	new_nd = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_nd->n = n;
	if (idx == 0)
	{
		new_nd->next = *head;
		*head = new_nd;
		return (new_nd);
	}
	new_nd->next = last->next;
	last->next = new_nd;
	return (new_nd);
}
