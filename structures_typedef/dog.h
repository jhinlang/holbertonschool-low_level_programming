#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is the structure to know the caracteristics of the dawg
 * @name: name of dawg
 * @owner: owner of dawg
 * @age: is the age of the dawg
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
