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
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int v = 0;

		while (argv[i][v] != '\0')
		{
			if (!isdigit(argv[i][v]))
			{
				printf("Error\n");
				return (1);
			}
			v++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
