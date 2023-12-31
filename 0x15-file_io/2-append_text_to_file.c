#include "main.h"

/**
  *append_text_to_file - this function appends text at end of a file
  *@filename: this is the name of file
  *@text_content: this is the text file
  *Return: 1 on success, otherwise 0;
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	_write = write(fd, text_content, strlen(text_content));
			if (_write == -1 || _write != (int)strlen(text_content))
			{
				close(fd);
				return (-1);
			}
			close(fd);
			return (1);
}
