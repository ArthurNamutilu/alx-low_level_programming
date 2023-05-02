#include "lists.h"
/**
  * find_listint_loop - function that finds the loop in linked list
  * @head: linked list being searched
  *
  * Return: The address of the starting loop node || NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *fst = head;

	if (!head)
	{
		return (NULL);
	}
	while (sl && fst && fst->next)
	{
		fst = fst->next->next;
		sl = sl->next;
		if (fst == sl)
		{
			sl = head;
			while (sl != fst)
			{
				sl = sl->next;
				fst = fst->next;
			}
			return (fst);
		}
	}
	return (NULL);
}
