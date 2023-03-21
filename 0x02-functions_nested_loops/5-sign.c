#include "main.h"
/**
  * print_sign -  prints sign of a number
  * @n: Input as integer
  *
  * Return: 1&& + if n greater than 0
  * 0&&0 if n is zero
  * -1&& - if n less than 0;
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
	_putchar('\n');
}
