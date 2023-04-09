#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Start
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int arg1, arg2, total;

	if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		total = arg1 * arg2;
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
