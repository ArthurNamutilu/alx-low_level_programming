#include "lists.h"
/**
  * pop_listint - deletes head node of a linked list
  * @head: pointer to 1st element in linked list
  *
  * Return: Data inside the deleted elements || 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (x);
}
