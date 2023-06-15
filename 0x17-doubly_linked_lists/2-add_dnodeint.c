#include "lists.h"
/**
  * add_dnodeint - Add new node @ the beginning of a list
  * @head: head node
  * @n: data
  * Return: new nd
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd;  /* new node */

	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
	{
		return (NULL);
	}

	nd->n = n;
	nd->prev = NULL;
	nd->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = nd;
	}
	*head = nd;
	return (nd);
}
