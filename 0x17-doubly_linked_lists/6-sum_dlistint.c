#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *sum_dlistint - returns the sum of all data
 *@head: head of the current DDL
 *Return: the sum of the data in the DDL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->prev)
	{
		head = head->prev;
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
