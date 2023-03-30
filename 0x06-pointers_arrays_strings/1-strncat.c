#include "main.h"
/**
  * _strncat - concatenates 2 strings to max of n characters
  * @dest: first string
  * @src: second string
  * @n: no of bytes to use
  *
  * Return: conactenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int destLength = 0;
	int j = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++) /* find length of dest */
		destLength++;
	while (j < n && src[j] != '\0') /* Cocatenate src[n] to dest*/
	{
		dest[destLength] = src[j];
		destLength++;
		j++;
	}
	dest[destLength] = '\0'; /* null terminator appended to end of string */
	return (dest);
}
