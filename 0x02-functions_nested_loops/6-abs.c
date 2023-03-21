#include "main.h"

/**
  * _abs - Finds absolute value
  * of a given integer
  *
  * @j: input number as an integer
  *
  * Return: the absolute value
  */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);  /* (* -1) makes integer  absolute */
	}
}
