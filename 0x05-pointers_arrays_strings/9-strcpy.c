#include "main.h"

/**
  * _strcpy - Copies a string
  * @dest: destination value
  * @src: Source value
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
