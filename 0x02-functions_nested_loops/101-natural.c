#include <stdio.h>
/**
  * main - start
  * Return: 0 Success
  */

int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		b++;
	}
	printf("%d\n", b);
	return (0);
}
