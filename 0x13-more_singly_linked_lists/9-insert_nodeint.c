#include "lists.h"
/**
  * insert_nodeint_at_index - inserts new node to a linked list..
  * ..@ a given position
  * @head: pointer to 1st node in the list
  * @idx: index where new node is added
  * @n: data to insert in new node
  *
  * Return: pointer to new node ||  NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (j = 0; tmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = nw;
			return (nw);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
