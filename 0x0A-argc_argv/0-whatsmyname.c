#include <stdio.h>

/**
  *main - this program prints its own name
  *@argc: this is the argument count
  *@argv: this is the argument vector
  *Return: (0)
  */

int main(int argc, char *argv[])
{
	(void) argc; /*this is for the unused variable*/

	printf("%s\n", argv[0]);
	return (0);
}
