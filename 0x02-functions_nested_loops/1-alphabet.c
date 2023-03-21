#include "main.h"
/**
  * print_alphabet - Prints alphabet in lowercase
  *
  * Return: 0 (success)
  */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
