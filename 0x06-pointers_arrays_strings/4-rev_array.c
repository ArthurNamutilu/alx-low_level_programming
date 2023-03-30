#include "main.h"
/**
  * reverse_array - reverses content of array
  * @a: array of number;
  * @n: number of elements to swap
  */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
