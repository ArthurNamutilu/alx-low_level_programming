#include "main.h"
/**
  * _puts_recursion - prints string
  * @s: string being printed
  *
  */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* empty string */
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
