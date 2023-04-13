#include "main.h"
#include "stdio.h"
/**
  * malloc_checked - allocates memory using malloc
  * @b: bytes to be allocated
  *
  * Return: 0
  */
void *malloc_checked(unsigned int b)
{
	void *txt;

	txt = malloc(b);
	if (txt == NULL)
		exit(98);
	return (txt);
}
