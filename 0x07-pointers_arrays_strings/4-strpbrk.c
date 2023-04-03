#include "main.h"
/**
  * _strpbrk - Entry point
  * @s: 1st input
  * @accept: 2nd input
  * Return: 0
  */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
				return (s);
			}
		s++;
		}
	return ('\0');
}
