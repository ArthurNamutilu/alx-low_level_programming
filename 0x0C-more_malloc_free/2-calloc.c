#include "main.h"
/**
  * _calloc - allocates memory for an array using malloc
  * @nmemb: allocate memory for array
  * @size: allocate element of size bytes
  *
  * Return: pointer -> alllocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *txt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	txt = malloc(nmemb * size);
	if (txt == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		txt[1] = 0;
	return (txt);
}
