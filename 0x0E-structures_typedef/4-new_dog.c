#include "dog.h"
#include "main.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int iname, iowner, copy;
	dog_t *n_dog;

	n_dog = (malloc(sizeof(*n_dog));
			if (n_dog == NULL || !(name) || !(owner))
			{
				free(n_dog);
				return (NULL);
			}
			for (iname = 0; name[iname] != '\0'; iname++)
			;

			for (iowner = 0; owner[iowner] != '\0'; iowner++)
			;

			n_dog->nmae = malloc(iname * sizeof(n_dog->name));
			if (n_dog->name == NULL)
			{
				free(n_dog->name);
				free(n_dog);
				return (NULL);
			}
			for (copy = 0; copy <= iname; copy++)
				n_dog->name[copy] = name[copy];
			n_dog->age = age;

			n_dog->owner = malloc(iowner * sizeof(n_dog->owner));
			if (n_dog->owner == NULL)
			{
				free(n_dog->owner);
				free(n_dog->name);
				free(n_dog);
				return (NULL);
			}
			for (copy = 0; copy <= iowner; copy++)
				n_copy->owner[copy] = owner[copy];
		return (n_dog);
}
