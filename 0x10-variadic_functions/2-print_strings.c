#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_strings - Prints strings and \n
  * @separator: String to be printed
  * @n: No of strings passed to the function
  * @...: Variable number of strings to be printed
  *
  * Description: If separator == NULL, it is not printed. If NULL print (nil)
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *txt;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		txt = va_arg(strings, char *);
		if (txt == NULL)
			printf("(nil)");
		else
			printf("%s", txt);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
