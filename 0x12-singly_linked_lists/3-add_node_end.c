#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * at the end
 * @head:pointer to the list
 * @str:pointer to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *end;
	size_t len;

	len = 0;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);
	while (str[len])
		len++;
	n_node->len = len;
	n_node->str = strdup(str);
	if (*head == NULL)
	{
		n_node->next = *head;
		*head = n_node;
	}
	else
	{
		n_node->next = NULL;
		end = *head;
		while (end->next)
			end = end->next;
		end->next = n_node;
	}
	return (n_node);
}
