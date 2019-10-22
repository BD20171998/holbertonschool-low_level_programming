#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: - Char string to be copied
 * Return: Char pointer to the duplicated string. Return NULL if insufficient
 * memory was available to array or if array is NULL
 */

char *_strdup(char *str)
{
	char *dup;

	int i, l;

	if (str == NULL)
		return (NULL);

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
		l++;

	dup = malloc(sizeof(char) * l + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < l ; i++)
		dup[i] = str[i];

	dup[l] = '\0';

	return (dup);

}

/**
 * new_dog - function that creates a new dog
 * @name: Char pointer for name
 * @age: Float for age
 * @owner: Char pointer for owner
 * Return: Pointer of new struct, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = _strdup(name);

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = _strdup(owner);

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	return (ptr);
}
