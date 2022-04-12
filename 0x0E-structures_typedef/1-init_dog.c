#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialise struct dog
 * @d: class
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
