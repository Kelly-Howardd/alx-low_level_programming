#include "dog.h"

/**
 * free_dog - function that frees dog.
 * @d: pointer to variable.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
