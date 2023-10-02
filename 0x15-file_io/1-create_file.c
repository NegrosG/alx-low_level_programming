#include "main.h"

/**
  *create_file - this function creates a file with given text_content
  *@filename: this name of file to be created
  *@text_content: a terminated string to write to file
  *Return: 1 on success or otherwise -1
  */

int create_file(const char *filename, char *text_content)
{
	int file;
	int result = 1;
	int count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		result = write(file, text_content, count);
	}
	if (result == -1)
		return (-1);
	close(file);
	return (1);
}
