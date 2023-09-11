#include "dog.h"
#include <stdio.h>

/**
  *init_dog - this function initializes struct dog
  *@d: this is the pointer to be stored in
  *@name: name of dog
  *@age: the age
  *@owner: the dog owner
  */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
