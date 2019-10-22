#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: - Pointer for dog_t structure
 * Return: Void
 */

void free_dog(dog_t *d)
{
	free(d->name);

	free(d->owner);

	free(d);
}
