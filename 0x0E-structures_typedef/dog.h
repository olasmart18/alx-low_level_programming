#ifndef DOG_H
#define DOG_H

/**
 * struct dog - block that contain dog sttributes
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	char *owner;
	float age;
};
/*typedef struct dog my_dog;*/

#endif
