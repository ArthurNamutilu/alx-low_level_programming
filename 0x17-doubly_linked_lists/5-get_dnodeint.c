#include "lists.h"

/**
 * get_dnodeint_at_index - Function that gets the node @ index
 * @head: head node
 * @index: index to get @
 * Return: indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;  /* current */
	unsigned int j = 0;

	while (curr != NULL)
	{
		if (j == index)
		{
			return (curr);
		}
		curr = curr->next;
		j++;
	}

	return (NULL);
}
