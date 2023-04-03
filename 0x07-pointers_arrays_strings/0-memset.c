#include "main.h"
/**
  * _memset - fill block memory with values
  * @s: memory to be filled
  * @b: value to be
  * @n: no bytes to be changed
  *
  * Return: changed array with new value
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
