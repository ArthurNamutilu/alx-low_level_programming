#include "main.h"
/**
  * string_toupper - convert lowercase to upper
  * @n: pointer
  * Return: all upercase
  */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\n')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
