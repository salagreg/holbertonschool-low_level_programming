#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Alloue un tableau 2D d'entiers.
 * @width: largeur du tableau (nombre de colonnes).
 * @height: hauteur du tableau (nombre de lignes).
 *
 * Retourne un pointeur vers le tableau alloué,
 * ou NULL si width ou height <= 0,
 * ou si une allocation mémoire échoue.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **tab;
	/*si negatif, pas d'allocation tableau valide*/
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	/*reserve de memoire height pointeur vers des int*/
	tab = malloc(height * sizeof(int *));
	/*verification allocation*/
	if (tab == NULL)
		return (NULL);
	/*allocation colonnes pour chaque lignes*/
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
	}
	return (tab);
}
