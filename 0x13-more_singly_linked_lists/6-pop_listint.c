#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: ptr to the list
 * Return: 0 if empty otherwise 1
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (*head == NULL)
		return (0);
	first = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(first);
	return (i);
}
