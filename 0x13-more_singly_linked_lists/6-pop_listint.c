#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: ptr to the adresses of the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
