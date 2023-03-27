#include "main.h"

/**
  * puts_half - prints half a string
  * @str: the string
  * Return: null
  */
void puts_half(char *str)
{
	int y = 0;
	int z;

	while (str[y] != '\0')
	{
		y++;
	}
	if (y % 2 == 1)
	{
		z = (y - 1) / 2;
		z += 1;
	}
	else
	{
		z = y / 2;
	}

	for (; z < y; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
