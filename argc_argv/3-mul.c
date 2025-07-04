#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplie deux nombres passés en arguments de la ligne de commande
 * @argc: Nombre total d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Return: 0 si la multiplication a réussi, sinon 1
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)/*error si autre que 2 arguments*/
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);/*convertir string en en entier*/
	j = atoi(argv[2]);
	printf("%d\n", i * j);/*multiplier deux nombres*/
	return (0);
}
