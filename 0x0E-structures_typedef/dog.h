#ifndef DOG_H
#define DOG_H

/**
  *struct dog - the dog structure
  *@name: name of dog
  *@age: the dog age
  *@owner: the owner of dog
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
