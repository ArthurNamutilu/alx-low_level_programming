#include "main.h"

/**
  * _atoi - convert string to integer
  * @s: The pointer to convert
  * Return: integer
  */

int _atoi(char *s)
{
	int x = 0;
	unsigned int n = 0;
	int min = 1;
	int isi = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}
		while (s[x] >= 48 && s[x] <= 57)
		{
			isi = 1;
			n = (n * 10) + (s[x] - '0');
			x++;
		}
		if (isi == 1)
		{
			break;
		}
		x++;
	}
	n *= min;
	return (n);
}
