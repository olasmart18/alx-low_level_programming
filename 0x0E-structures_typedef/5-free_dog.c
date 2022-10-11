#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function that frees dogs
 * @d: struct dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
