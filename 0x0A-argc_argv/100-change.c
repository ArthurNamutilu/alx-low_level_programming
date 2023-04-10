#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - Start
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2) /* Check if number of arguments is exactly 1 */
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;

	coins += cents / 25;
	cents %= 25;   /* asign remainder to cents variable */

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
