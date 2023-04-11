#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of size size & assign char c
  * @size: array size
  * @c: characters to assign
  *
  * Return: pointer to array || NULL if fail
  */

char *create_array(unsigned int size, char c)
{
	char *txt;
	unsigned int i;

	txt = malloc(sizeof(char) * size);
	if (size == 0 || txt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		txt[i] =  c;
	return (txt);
}
