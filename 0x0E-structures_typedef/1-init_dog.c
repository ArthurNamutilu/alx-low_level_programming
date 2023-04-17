#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a variable of type dog
  * @d: pointer to struct dog to initialize
  * @name: nme to initialize
  * @age: age to initi..
  * @owner: owner to initialize
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	/* initializing variables to dog */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
