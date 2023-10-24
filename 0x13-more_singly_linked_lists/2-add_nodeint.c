#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of the list
 * @n: data to insert in that new node
 *
 * Return: Address of the new node, or NULL if allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nd = malloc(sizeof(listint_t));

	if (!new_nd)
		return (NULL);

	new_nd->n = n;
	new_nd->next = (*head);
	(*head) = new_nd;

	return (new_nd);
}
