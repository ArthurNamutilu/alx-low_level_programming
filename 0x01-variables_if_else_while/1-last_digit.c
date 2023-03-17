#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
{
		printf("last digit of %d is %d and is greater than 5\n", n, last);
}
	else if (last == 0)
{
		printf("last digit of %d is %d and is %d\n", n, last, last);
}
	else
{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
	return (0);
}