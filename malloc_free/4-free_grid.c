#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Libère la mémoire allouée pour un tableau 2D d'entiers.
 * @grid: Pointeur vers le tableau 2D à libérer.
 * @height: Nombre de lignes du tableau.
 *
 * Libère chaque ligne puis libère le tableau principal.
 * Return : Ne fait rien si grid est NULL.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
