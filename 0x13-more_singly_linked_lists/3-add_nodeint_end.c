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

	listint_t *initial;
	listint_t *new_nd = malloc(sizeof(listint_t));

	if (!new_nd)
		return (NULL);

	new_nd->n = n;
	new_nd->next = NULL;

	if (!(*head))
	{
		*head = new_nd;
	}
	else
	{
		initial = *head;
		while (initial->next)
		{
			initial = inital->next;
		}
		initial->next = new_nd;
	}

	return (new_nd);
}
