#include "main.h"
#include <stdio.h>
/**
  * array_range -creates array of int values
  * @min: min range of stored values
  * @max: max range of no of elements & storred values
  *
  * Return: pointer to new array.
  */
int *array_range(int min, int max)
{
	int *txt;
	int i, sz;

	if (min > max)
		return (NULL);
	sz = max - min + 1;
	txt = malloc(sizeof(int) * sz);
	if (txt == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		txt[i] = min++;
	return (txt);
}
