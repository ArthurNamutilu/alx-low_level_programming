#include "main.h"
/**
  * print_alphabet_x10 - prints alphabets X 10
  *
  * Return: 0 (success)
  */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
