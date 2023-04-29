#include "lists.h"
/**
  * print_listint - prints  elements of a linked list
  * @h: linked list (type listint_t to print).
  *
  * Return: no of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no++;
		h = h->next;
	}
	return (no);
}
