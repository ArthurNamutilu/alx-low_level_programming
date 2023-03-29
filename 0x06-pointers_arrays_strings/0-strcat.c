#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  *
  * Return: concatenated string.
  */

char *_strcat(char *dest, char *src)
{
	char *holder = dest;

	while (*holder != '\0')
	{
		holder++;
	}
	while (*src != '\0')
	{
		*holder = *src;
		holder++;
		src++;
	}
	*holder = '\0';
	return (dest);
}
