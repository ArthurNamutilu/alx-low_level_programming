#include "main.h"
/**
  * flip_bits - counts no of bits to be changed.
  * from 1 number to another
  * @n: 1st number
  * @m: 2nd number
  *
  * Return: no of bits to change
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cnt = 0;
	unsigned long int curr;
	unsigned long int exe = n ^ m;
	for (j = 63; j >= 0; j--)
	{
		curr = exe >> j;
		if (curr & 1)
			cnt++;
	}
	return (cnt);
}
