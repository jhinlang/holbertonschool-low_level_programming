#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL (Fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, lname = 0, lowner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lname])
		lname++;
	while (owner[lowner])
		lowner++;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (lname + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (lowner + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';

	for (i = 0; i < lowner; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';
	ndog->age = age;
	return (ndog);
}

