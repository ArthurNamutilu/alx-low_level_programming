#include "main.h"
#include <stdio.h>

/**
  * print_rev - reverse a string and prints it
  * @s: string to reverse
  * Return: null
  */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
