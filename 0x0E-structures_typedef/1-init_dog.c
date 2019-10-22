#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Char pointer for name
 * @age: Float for age
 * @owner: Char pointer for owner
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
