#include <stdio.h>

/**
  *main - this program prints the number of arguments passed into it
  *@argc: this is the argument count
  *@argv: this is the argument vector
  *Return: (0)
  */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
