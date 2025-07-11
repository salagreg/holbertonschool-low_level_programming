#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Owner to assign to the dog
 *
 * Return: This function sets the fields of a struct dog
 * with the provided name, age, and owner values. If the
 * pointer d is NULL, it allocates memory before initializing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*test si d est nul*/
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
