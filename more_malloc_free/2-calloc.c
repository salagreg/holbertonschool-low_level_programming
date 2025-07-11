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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; ptr[i] < nmemb * size; i++)
	{
		((char *)ptr[i] = 0;
	}
	return (ptr);
}
