#include "main.h"
/**
  * print_binary - prints binary equivalent of a decimal no
  * @n: no which to print in binary
  */
void print_binary(unsigned long int n)
{
	int j, total = 0;
	unsigned long int curr;

	for (j = 63; j >= 0; j--)
	{
		curr = n >> j;

		if (curr & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total)
			_putchar('0');
	}
	if (!total)
		_putchar('0');
}
