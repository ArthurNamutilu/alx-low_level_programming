#include "lists.h"

/**
  * print_dlistint - prints list data
  * @h: The head node
  *
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;  /* count */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
