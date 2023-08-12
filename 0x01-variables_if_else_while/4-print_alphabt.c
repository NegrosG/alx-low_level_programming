#include <stdio.h>

/**
 * main - all codes are in main function
 *
 * Return:(0) is a success
 */

int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);




}

