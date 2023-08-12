#include <stdio.h>

/**
 * main - all codes are in main function
 *
 * Return: (0) is a success
 */

int main(void)
{
	int l;
	char m;

	for (l = 0 ; l < 10 ; l++)
		putchar(l + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
		return (0);

}
