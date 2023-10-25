#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all
 * @head: Address of the first node of the list.
 * Return: Sum
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
