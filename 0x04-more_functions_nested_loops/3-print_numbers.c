#include "main.h"

/**
  * print_numbers - prints numbers 0-9 and \n
  */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
