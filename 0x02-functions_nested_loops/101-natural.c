#include <stdio.h>
/**
 * main - start
 * Return: 0 Success
 */

int main()
{
	int sum = 0;
	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
