#include "lists.h"
/**
  * reverse_listint - function tat reverses a linked list
  * @head: pointer to e' 1st node in the list
  *
  * Return: pointer to 1st node in the new list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
