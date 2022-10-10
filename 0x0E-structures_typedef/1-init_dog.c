#include "main.h"

/**
 * init_dog - function to initialize structure
 * @owner: owner of dog
 * @d: dog attribute
 * @age: dog age
 * @name: dog name
 * Return: pointer to struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	(*d).name = name;
	d->owner = owner;
	(*d).age = age;

	return (d);
}
