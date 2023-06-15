#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: head node
 * Return: data sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		total += curr->n;
		curr = curr->next;
	}
	return (total);
}
