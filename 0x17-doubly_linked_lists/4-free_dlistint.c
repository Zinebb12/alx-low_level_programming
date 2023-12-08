#include "lists.h"
/**
 * free_dlistint - free a DLL
 * @head: pointer to the head of the DLL
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(new_node);
	}
	free(head);
}
