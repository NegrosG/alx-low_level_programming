#include "variadic_functions.h"

/**
  *print_strings - this function prints strings
  *@separator: the streing to print
  *@n: number of arguments
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list(num);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(num, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		{
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}

