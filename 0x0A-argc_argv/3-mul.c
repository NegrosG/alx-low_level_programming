#include <stdio.h>
#include <stdlib.h>

/**
  *main - this program prints the result of multiplication
  *@argc: this is the argument count
  *@argv: this is the argument vector
  *Return:(0);
  */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
