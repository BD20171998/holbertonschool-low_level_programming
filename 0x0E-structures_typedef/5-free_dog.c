#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: - Pointer for dog_t structure
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	else if (d->owner == NULL)
	{
		free(d->name);
		free(d);
	}


	else if (d->name == NULL)
	{
		free(d->owner);
		free(d);
	}

	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
