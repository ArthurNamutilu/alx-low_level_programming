#include "main.h"

int is_prime(int n, int m);
/**
  * is_prime_number - finds if integer is prime
  * @n: the integer
  *
  * Return: 1 if prime 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
/**
  * is_prime - recursively finds if a number is prime
  * @n: the number
  * @m: iterator value
  *
  * Return: 1 if prime 0 if not prime
  */
int is_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (is_prime(n, m - 1));
}
