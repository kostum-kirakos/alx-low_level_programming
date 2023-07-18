#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * name age owner : are members of struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
	d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
