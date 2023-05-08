#include "main.h"
/**
  * create_file - Function that creates a file
  * @filename: Pointer to file created.
  * @text_content: Pointer to a string to write to the file
  *
  * Return: (-1) if function failse else (1)
  */
int create_file(const char *filename, char *text_content)
{
	int f, wr;
	int len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f, text_content, len);
	if (f == -1 || wr == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}
