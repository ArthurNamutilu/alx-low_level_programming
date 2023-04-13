#include "main.h"
#include <stdio.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: 1st char
  * @s2: 2nd char
  * @n: no of bytes
  *
  * Return: concatenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *txt;
	unsigned int a, b, c;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; ++b)
			;
	}
	if (b > n)
		b = n;
	txt = malloc(sizeof(char) * (a + b + 1));
	if (txt == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		txt[c] = s1[c];
	for (c = 0; c < b; c++)
		txt[c + a] = s2[c];
	txt[a + b] = '\0';
	return (txt);
}
