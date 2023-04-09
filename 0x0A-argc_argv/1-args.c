#include <stdio.h>
#include "main.h"

/**
  * main - prints programs name
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	printf("%d\n", argc -1);


	for (count = 0; count < argc; count++)
	{
/*		printf("%d\n", count); */
	}
/*	printf("%d\n", count);  */
	return (0);
}
