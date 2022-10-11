#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
g* Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t n_dog;
	dot_t *nw_dog = &n_dog;

	n_dog.name = name;
	n_dog.age = age;
	n_dog.owner = owner;

	if (nw_dog == NULL)
		return (NULL);

	return (nw_dog);
}
