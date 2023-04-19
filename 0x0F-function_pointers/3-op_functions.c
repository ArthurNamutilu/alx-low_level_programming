#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
/**
  * op_add - Returns the sum
  * @x: 1st number.
  * @y: 2nd number.
  *
  * Return: The sum of x and y.
  */
int op_add(int x, int y)
{
	return (x + y);
}
/**
  * op_sub - Returns difference two numbers.
  * @x: 1st number.
  * @y: 2nd number.
  *
  * Return: difference of x and y
  */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
  * op_mul - Product of two numbers.
  * @x: The first number.
  * @y: The second number.
  *
  * Return: The product of a and b.
  */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
  * op_div - Returns the division of two numbers.
  * @x: The first number.
  * @y: Second number.
  *
  * Return: Quotient of x and y.
  */
int op_div(int x, int y)
{
	return (x / y);
}
/**
  * op_mod - Gets remainder of the division of two numbers.
  * @x: 1st number.
  * @y: The second number.
  *
  * Return: remainder of x%y
  */
int op_mod(int x, int y)
{
	return (x % y);
}
