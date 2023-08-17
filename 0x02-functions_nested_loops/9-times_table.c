#include "main.h"
#include <stdio.h>
/**
 * times_table - this function prints a row and column of numbers
 * Return: (void)
 */

void times_table(void)
{
	int j, k, answer;

	for (j = 0 ; j < 10 ; j++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			answer = j * k;
			if (k == 0)
				printf("%d, ", answer);
			else
			{
				printf("%2d", answer);
				if (k != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
