#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Write a function that frees dogs.
  * @d: A dog structure
  *
  * Return: NoThing
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
