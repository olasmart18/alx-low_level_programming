#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - block that contain dog sttributes
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
