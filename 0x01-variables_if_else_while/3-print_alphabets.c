#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 97;
	int upperCase = 65;

	while (lowerCase <= 122)
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 90)
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
