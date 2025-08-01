#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the information of a dog
 * @d: Pointer to the struct dog to print
 *
 * Return: This function prints the name, age, and owner of the dog.
 * If the dog's name or owner is NULL, it prints "(nil)" instead.
 * If the pointer d is NULL, the function returns without printing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
