#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * count - counts words in  array
  * @wd: array to be printed
  *
  * Return: nummber of words
  */
int count(char *wd)
{
	int i, j, f;

	for (i = 0; wd[i] != '\0'; i++)
	{
		if (wd[i] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			j++;
		}
	}
	return (j);
}
/**
  * strtow - splits a string into words
  * @str: string to split
  *
  * Return: pointer to an array of strings (Success) || NULL (Error)
  */
char **strtow(char *str)
{
	char **mx, *tm;
	int i, start, end;
	int j = 0;
	int l = 0, wd = 0, cnt = 0;

	while (*(str + l))
		l++;
	wd = count(str);
	if (wd == 0)
		return (NULL);
	mx = (char **) malloc(sizeof(char *) * (wd + 1));
	if (mx == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (cnt)
			{
				end = i;
				tm = (char *) malloc(sizeof(char) * (cnt + 1));
				if (tm == NULL)
					return (NULL);
				while (start < end)
					*tm++ = str[start++];
				*tm = '\0';
				mx[j] = tm - cnt;
				j++;
				cnt = 0;
			}
		}
		else if (cnt++ == 0)
			start = i;
	}
	mx[j] = NULL;
	return (mx);
}
