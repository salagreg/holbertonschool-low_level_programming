#include "main.h"
#include <stdio.h>
/**
* print_array - Imprimer n éléments d'un tableau d'entiers
* @a : pointe sur les éléments
* @n : contient les éléments
* Return: neant
*/
void print_array(int *a, int n)
{
	int nbr = 0;

/* boucle pour afficher les éléments du tableau */
	for (nbr = 0 ; nbr < n ; nbr++) /* nbr < n : signifie tant que je n'ai
					* pas atteint le n-ième élément tu
					* continues
					*/
	{
		printf("%d", a[nbr]);
		if (nbr < n - 1) /* si nombre au-dessus de n, pas de virgule */
		{
			printf(", ");
		}
	}
	printf("\n");
}
