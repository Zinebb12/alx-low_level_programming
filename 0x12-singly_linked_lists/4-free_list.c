#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 *
 * @head: A pointer to the list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
