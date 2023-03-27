#include "main.h"

/**
  * swap_int -Swap the value of two integers
  * @a: 1st integer
  * @b: second integer
  *
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
