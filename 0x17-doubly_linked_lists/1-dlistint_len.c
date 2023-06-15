#include "lists.h"

/**
  * dlistint_len - Return (No of nodes)
  * @h: the head node
  *
  * Return: no of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
