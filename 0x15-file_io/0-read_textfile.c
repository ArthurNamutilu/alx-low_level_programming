#include "main.h"
#include <stdlib.h>
/**
  * read_textfile- Reads a text file print to STDOUT
  * @filename: file being read
  * @letters: no of letters to be read
  * Return: w no of bytes read & printed || 0 if func fail or filename = NULL
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f;
	ssize_t wi;
	ssize_t ti;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	ti = read(f, buff, letters);
	wi = write(STDOUT_FILENO, buff, ti);

	free(buff);
	close(f);
	return (wi);
}
