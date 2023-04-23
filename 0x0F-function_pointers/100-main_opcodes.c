#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints own opcodes
  * @argc: no of arguments
  * @argv: arr of arguments
  *
  * Return: 0 -> (Success)
  */
int main(int argc, char *argv[])
{
	int byt, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (j = 0; j < byt; j++)
	{
		if (j == byt - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
