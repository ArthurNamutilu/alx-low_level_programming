#include "lists.h"
/**
  * sum_listint - Functin that calculates sum of all data in a listint_t list
  * @head: 1st node in the linked list
  *
  * Return: The resulting sum
  */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		total += tmp->n;
		tmp = tmp->next;
	}
	return (total);
}

