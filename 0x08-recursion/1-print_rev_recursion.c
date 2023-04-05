#include "main.h"

/**
  * _print_rev_recursion - reverses a string
  * @s: string being reversed
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* empty string */
	{
		return;
	}
	s++;
	_print_rev_recursion(s); /* recursion */
	s--;
	_putchar(*s);
}
