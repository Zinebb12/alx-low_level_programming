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
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head != NULL)
	{
		new_node->prev = NULL;
		new_node->next = (*head);
		(*head)->prev = new_node;
		*head = new_node;
		return (_new_node);
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);

}
