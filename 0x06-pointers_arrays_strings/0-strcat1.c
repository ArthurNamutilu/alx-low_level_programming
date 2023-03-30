#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: secind string
  *
  * Return: concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++) /* finds length of dest */
		destLen++;
	for (i = 0; src[i] != '\0'; i++) /* length of src */
		srcLen++;

	for (i = 0; i <= srcLen; i++)
		dest[destLen + i] = src[i]; /* concatinating */
	return (dest);
}
