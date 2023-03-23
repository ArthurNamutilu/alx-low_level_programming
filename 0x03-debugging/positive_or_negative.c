#include "main.h"
/**
  * positive_or_negative - find if number is positive or negative
  * @i: value being checked
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
