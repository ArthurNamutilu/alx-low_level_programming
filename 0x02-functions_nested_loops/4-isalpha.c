#include "main.h"
/**
  * _isalpha - checks alphabetic character
  * @c: ASCII character code
  *
  * Return: 1 if alphabet 0 non character
  */

int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
