#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau de nmemb éléments
 *           de taille size, initialisés à 0
 * @nmemb: nombre d’éléments
 * @size: taille en octets de chaque élément
 *
 * Return: pointeur vers la mémoire allouée, ou NULL si erreur ou si
 * nmemb ou size est 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
