#include "main.h"

/**
  *binary_to_unit - this function converts binary to unsigned int
  *@b: this is the string to convert
  *Return: the converted num or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int loop;

	if (b == NULL)
		return (0);
	for (loop = 0; b[loop] != '\0'; loop++)
	{
		if (b[loop] == '0' || b[loop] == '1')
		{
			conv = conv * 2;
			conv = conv | (b[loop] - '0');
		}
		else
			return (0);
	}
	return (conv);
}
