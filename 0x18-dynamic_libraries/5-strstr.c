#include "main.h"

/**
 * _strstr -  this fuction locates a substring
 * @haystack: the pointer to search
 * @needle: the substring to be located
 * Return: pointer to the beeginning if substring is located, otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;
		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');

}
