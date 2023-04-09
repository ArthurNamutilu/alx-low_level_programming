#include "main.h"
/**
  * _strlen_recursion - returns 1 if a string is a palindrome0 if not.
  * @s: string
  * Return: the length of a string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
  * compare - compares all characters of the string.
  * @s: string
  * @n1: small iterator.
  * @n2: big iterator.
  * Return: 0
  */

int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
  * is_palindrome - Finds if a string is palindrome
  * @s: string
  * Return: 1 if s is a palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}