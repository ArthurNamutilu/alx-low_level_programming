#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - Sums all its paramters
  * @n: no of paramters passed to function
  * @...: Variable number of paramters to calculate the sum of.
  *
  * Return: If n == 0 - 0 Otherwise - the sum all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	unsigned int total = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		total += va_arg(ap, int);
	va_end(ap);
	return (total);
}
