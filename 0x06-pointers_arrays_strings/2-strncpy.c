#include "main.h"
/**
  * _strncpy - Copies a string
  * @dest: destination
  * @src: source
  * @n: no of bytes to copy
  * Return: dest copied
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0') /* Copies from src to dest */
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) /* Fills the remaining position with null character */
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
