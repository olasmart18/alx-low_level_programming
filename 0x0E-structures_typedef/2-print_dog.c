#include "dog.h"
#include "main.h"

/**
 * print_dog - function to prints dog's attreibutes
 * @d: dogs attributes
 * Return: pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	if (d->name == NULL)
		printf("Name : (nil)\n");
	else
		 printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	}
}
