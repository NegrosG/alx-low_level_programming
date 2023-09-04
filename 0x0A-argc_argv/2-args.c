#include <stdio.h>

/**
  * main - this programs prints all the argument it recieves
  *@argc: this is the argument count
  *@argv: this is the argument vector
  *Return: (0)
  */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
		printf("%s\n", argv[k]);
	return (0);
}
