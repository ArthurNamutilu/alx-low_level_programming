#include "main.h"

/**
  * print_triangle - prints a rectangle
  * @size: numbe of times
  *
  */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= x; y++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
