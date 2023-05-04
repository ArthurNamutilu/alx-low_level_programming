#include "main.h"
/**
  * set_bit - sets a bit @ a given index to 1.
  * @n: pointer to no to change
  * @index: bit index being set to 1.
  *
  * Return: 1 (Success) || -1 (fail)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
