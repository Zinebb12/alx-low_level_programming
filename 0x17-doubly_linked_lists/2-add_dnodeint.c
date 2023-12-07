#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double linked list
 * @head: a double pointer to the ehad of the list
 * @n: the content of the new node
 *
 * Return: the address of the new element to be added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	if (*head == NULL)
	{
		new_n->next = NULL;
		new_n->prev = NULL;
	}
	else
	{
		new_n->next = *head;
		new_n->prev = NULL;
		(*head)->prev = new_n;
	}
	*head = new_n;
	return (new_n);
}
