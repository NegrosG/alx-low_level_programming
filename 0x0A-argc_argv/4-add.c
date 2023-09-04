#include <stdio.h>
#include <stdlib.h>

/**
  *main - this function adds positive numbers
  *@argc: this is the argument count
  *@argv: this is the argument vector
  *Return: 0 or 1
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
