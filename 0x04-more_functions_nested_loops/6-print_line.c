#include "main.h"

/**
  * print_line - prints line on terminal
  * @n: number of times to print line
  */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
