#include "lists.h"
/**
 * free_dlistint - Function taht frees a list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *m;  /* temp..orary */

	while (head != NULL)
	{
		m = head;
		head = head->next;
		free(m);
	}
}
