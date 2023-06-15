#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of list
 * @head: head 
 * @n: data
 * Return: Return (new node)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd;  /* new node */
	dlistint_t *last = *head;

	nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
	{
		return (NULL);
	}

	nd->n = n;
	nd->next = NULL;

	if (*head == NULL)
	{
		nd->prev = NULL;
		*head = nd;
		return (nd);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = nd;
	nd->prev = last;
	return (nd);
}
