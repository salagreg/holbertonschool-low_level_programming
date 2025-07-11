#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog struct to be freed
 *
 * This function frees the memory allocated for the name and owner
 * strings, as well as the struct itself. It does nothing if @d is NULL.
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
