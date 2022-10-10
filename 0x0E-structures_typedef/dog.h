#ifndef DOG_H
#define DOG_H

/**
 * struct dog - block that contain dog sttributes
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 */
/*typedef struct dog dog_t;*/

typedef struct dog
{
	char *name;
	char *owner;
	float age;
}
dog_t;

#endif
