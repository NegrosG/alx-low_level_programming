#include "variadic_functions.h"

/**
 *print_all - function prints anything
 *@format: list of type of argument passed to function
 *Retunr: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *set = "";

	va_list(print);
	va_start(print, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", set, va_arg(print, int));
					break;
				case 'i':
					printf("%s%d", set, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", set, va_arg(print, double));
					break;
				case 's':
					str = va_arg(print, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", set, str);
					break;
				default:
					i++;
					continue;
			}
			set = ", ";
			i++;
		}
	}
	printf("\n");
}
