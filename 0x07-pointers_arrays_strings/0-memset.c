#include "main.h"

/**
  * _memset - fills memory with a constant type
  * @s: destination
  * @b: const byte
  * @n: bytes
  * Return: 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
