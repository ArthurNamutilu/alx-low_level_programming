#include "lists.h"

/**
 * delete_dnodeint_at_index - Dels node @ a index
 * @head: head node
 * @index: index to be deleted
 * Return: (1) -> success, (-1) -> failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *norm = *head;
	unsigned int c;

	if (!head || !norm)
		return (-1);

	if (index == 0)
	{
		norm = norm->next;
		free(*head);
		*head = norm;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (c = 0; norm; c++)
	{
		if (c == index)
		{
			if (norm->next)
			{
				(norm->prev)->next = norm->next;
				(norm->next)->prev = norm->prev;
				free(norm);
				return (1);
			}
			else
			{
				(norm->prev)->next = NULL;
				free(norm);
				return (1);
			}
		}
		norm = norm->next;
	}

	return (-1);
}

