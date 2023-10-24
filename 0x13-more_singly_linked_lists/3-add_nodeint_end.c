#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: pointer to the first element in the lisst
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
