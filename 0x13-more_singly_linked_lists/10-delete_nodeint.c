#include "lists.h"
/**
  * delete_nodeint_at_index - dels a node in a linked list @ certain indx
  * @head: pointer to 1st element in e' list
  * @index: index of node tobe deleted.
  *
  * Return: 1 == Success || -1 Fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *tmp = *head;
	listint_t *crnt = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		j++;
	}
	crnt = tmp->next;
	tmp->next = crnt->next;
	free(crnt);

	return (1);
}
