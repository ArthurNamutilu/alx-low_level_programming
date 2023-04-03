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
	int x = 0;

	for (; x > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
