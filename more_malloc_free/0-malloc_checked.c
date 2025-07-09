#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Alloue de la mémoire avec malloc
 * @b: taille en octets à allouer
 * Return: Un pointeur vers la mémoire allouée
 *         Termine le programme avec exit 98 si malloc échoue
 */
void *malloc_checked(unsigned int b)
{
	/*prend la valeur en octet de ptr*/
	void *ptr = malloc(b);
	/*condition pour test*/
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
