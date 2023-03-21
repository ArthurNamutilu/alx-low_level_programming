#include "main.h"
/**
  * _islower - checks for lowercase characters
  *
  * @c: ASCII code character
  * Return: 1 -lowercase || 0 - Otherwise
  */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
