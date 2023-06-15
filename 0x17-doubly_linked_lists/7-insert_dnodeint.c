#include "lists.h"
/**
 * insert_dnodeint_at_index - node insert at index
 * @h: list
 * @idx: index
 * @n: par
 * Return: new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a = *h;
	dlistint_t *nd = malloc(sizeof(dlistint_t));
	unsigned int c;

	if (!h || !nd)
		return (NULL);

	nd->n = n;

	if (!(*h))
	{
		nd->prev = NULL;
		nd->next = NULL;
		*h = nd;
		return (nd);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (c = 0; a; c++)
	{
		if (c == idx)
		{
			nd->prev = a->prev;
			(a->prev)->next = nd;
			a->prev = nd;
			nd->next = a;
			return (nd);
		}
		else if (!a->next && 1 + c == idx)
			return (add_dnodeint_end(h, n));
		a = a->next;
	}
	return (NULL);
}
