#include "main.h"
#include <stdlib.h>
/**
 * array_range - Crée un tableau d'entiers de min à max (inclus)
 * @min: La valeur minimale (incluse)
 * @max: La valeur maximale (incluse)
 *
 * Return: Un pointeur vers le tableau créé
 *         NULL si min > max ou si l'allocation échoue
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
