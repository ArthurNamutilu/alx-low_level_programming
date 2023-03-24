#include "main.h"

/**
  * _isupper - checks for uppercase charcter
  *
  * @c: integer representing character
  *
  * Return: 1 if upper, 0 if otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}

