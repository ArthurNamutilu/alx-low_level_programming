#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
  * looped_listint_len - Counts no of unique nodes in..
  * ..a looped listint_t linked list
  * @head: Pointer to head of the listint_t to check.
  *
  * Return: 0 ?> If list is not looped
  * else: no of unique nodes in list
  */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	tort = head->next;
	har = (head->next)->next;
	while (har)
	{
		if (tort == har)
		{
			tort = head;
			while (tort != har)
			{
				n++;
				tort = tort->next;
				har = har->next;
			}
			tort = tort->next;
			while (tort != har)
			{
				n++;
				tort = tort->next;
			}
			return (n);
		}
		tort = tort->next;
		har = (har->next)->next;
	}
	return (0);
}
/**
  * print_listint_safe - prints a listint-t list
  * @head: pointer to head of l-t list
  *
  * Return: (0);
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);
	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n);
}
