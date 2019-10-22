#ifndef _dog_
#define _dog_



/**
 * struct dog - Dog elements
 * @name: Char pointer
 * @age: Float for age
 * @owner: Char pointer for owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
