#ifndef _DOG_
#define _DOG_



/**
 * struct dog - Dog elements
 * @name: Char pointer
 * @age: Float for age
 * @owner: Char pointer for owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
