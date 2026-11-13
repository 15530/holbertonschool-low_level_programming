#include "dog.h"
#include <stdlib.h>

/**
 * copy_str - duplicates a string into newly allocated memory
 * @s: the string to copy
 *
 * Return: pointer to the copy, or NULL on failure or if s is NULL.
 */
static char *copy_str(char *s)
{
	char *dup;
	int len;
	int i;

	if (s == NULL)
		return (NULL);

	len = 0;
	while (s[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = s[i];

	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = copy_str(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = copy_str(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
