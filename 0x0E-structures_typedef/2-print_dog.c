#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}

	printf("Name :%s\n", d->name);
	printf("age :%f\n", d->age);
	printf("Name :%s\n", d->owner);
}
