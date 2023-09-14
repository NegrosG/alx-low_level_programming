#include "variadic_functions.h"

/**
 *print_numbers - the function prints numbers
 *@separator: this is string to seperate parameters
 *@n: number of arguments
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list(print);
	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(print, int);
		printf("%d", num);
		{
			if (i < n && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(print);
	printf("\n");
}
