#include <string.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - entry point to create a function that give stats about a dog
 * @d: is the structure
 * @name: is the dog name
 * @age: is the dog age
 * @owner: is the dog owner
 *
 * Return: the dog informations
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
