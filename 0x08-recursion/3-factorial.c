#include "main.h"
/**
  * factorial - returns factorial of a number
  * @n: number to find factor of
  *
  * Return: factorial of n
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
