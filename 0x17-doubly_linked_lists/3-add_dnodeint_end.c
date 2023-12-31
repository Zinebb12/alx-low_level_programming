#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint_end - adds a node at the end of a DDL
 *@head:pointer to list
 *@n:integer data
 *Return:address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	current_node = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		new_node->prev = current_node;
		current_node->next = new_node;
	}
	return (new_node);
}
