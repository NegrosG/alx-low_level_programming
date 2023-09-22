#include <stdio.h>

void first_write(void) __attribute__ ((constructor));

/**
  *first_write - this function prints a sentence before the main
  *fucntion is executed
  */

void first_write(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
