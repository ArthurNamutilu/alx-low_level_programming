#include "main.h"
#include <stdio.h>
/**
  * _sqrt_recursion - returns squareroot of a number
  * @n: number to get squareroot
  *
  * Return: squareroot.
  */
int actual_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (actual_sqrt(n, 1));
}

/**
  * actual_sqrt - finds the natural number
  * square root of a number
  * @n: number to find natural square root
  * @i: iterate no
  *
  * Return: natural squqreroot
  */

int actual_sqrt(int n, int i)
{
	int squareroot = i * i;

	if (squareroot > n)
		return (-1);
	if (squareroot == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
