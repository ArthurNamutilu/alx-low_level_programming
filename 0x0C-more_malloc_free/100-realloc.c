#include "main.h"
/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: points memory previously allocatted
  * @old_size: size of allocated space for ptr (bytes)
  * @new_size: new memory block
  *
  * Return: 0
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *txt;
	unsigned int i;
	unsigned int j = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		txt = malloc(new_size);
		return (txt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	txt = malloc(new_size);
	if (txt == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		txt[i] = oldptr[i];
	free(ptr);
	return (txt);
}
