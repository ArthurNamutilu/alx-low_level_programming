/* #include "main.h" */

#include <stdio.h>
/**
  * _strlen - Returns length of a string
  * @str: string to get the length
  * Return: string length
  */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
