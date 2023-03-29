#include "main.h"
/**
  * _strncat - concatenates 2 strings
  * @dest: first string
  * @src: second string
  * @n: no of bytes to use
  *
  * Return: conactenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int destLength = 0;
	int srcLength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destLength++;
	for (i = 0; src[i] != '\0'; i++)
		srcLength++;
	for (i = 0; i < n; i++)
		dest[destLength + i] = src[i];
	return (dest);
}
