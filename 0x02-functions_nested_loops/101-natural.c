#include <stdio.h>

/**
 * main - this is a function that add multiples of 3 or 5
 * Return: (0) is success
 */

int main(void)
{
	int sum = 0;
	int a;

	for (a = 0 ; a < 1024 ; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + 1;
	}
	printf("%d\n", sum);
	return (0);
}
