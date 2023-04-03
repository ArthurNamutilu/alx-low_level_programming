#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - print sum of two diagonals of square matrix of integers
  * @a: input
  * @size: input 2
  */
void print_diagsums(int *a, int size)
{
	int k, l;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; k <= (size * size); k = k + size + 1)
	{
		sum1 = sum1 + a[k];
	}
	for (l = size - 1; l <= (size * size) - size; l = l + size - 1)
	{
		sum2 = sum2 + a[l];
	}
	printf("%d, %d\n", sum1, sum2);
}
