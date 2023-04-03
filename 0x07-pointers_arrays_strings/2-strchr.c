#include "main.h"
/**
  * _strchr - locates character in string
  * @s: string
  * @n: input
  *
  * Return: 0 no char || c if char present
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
