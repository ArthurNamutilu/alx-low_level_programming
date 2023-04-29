#include "lists.h"
/**
  * add_nodeint - adds new node @ e` start of a linked list
  * @head: pointer to 1st node in list
  * @n: dat to be inserted to the new node
  *
  * Return: pointer to new node || NULL if fail
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *no; /* *new */

	no = malloc(sizeof(listint_t));
	if (!no)
	{
		return (NULL);
	}
	no->n = n;
	no->next = *head;
	*head = no;
	return (no);
}
