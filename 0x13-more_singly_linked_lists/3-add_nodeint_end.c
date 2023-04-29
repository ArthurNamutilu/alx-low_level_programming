#include "lists.h"
/**
  * add_nodeint_end - function that adds a node @ e` end of alinked list.
  * @head: pointer to 1st element in the list
  * @n: The data inserted to new element
  *
  * Return: pointer to new node || NULL if fail
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *no;
	listint_t *tmp = *head;

	no = malloc(sizeof(listint_t));
	if (!no)
		return (NULL);

	no->n = n;
	no->next = NULL;
	if (*head == NULL)
	{
		*head = no;
		return (no);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = no;
	return (no);
}
