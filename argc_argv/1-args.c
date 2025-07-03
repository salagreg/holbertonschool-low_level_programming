#include <stdio.h>
/**
 * main - Affiche le nombre d'arguments passés en ligne de commande
 * @argc: Nombre total d'arguments (y compris le nom du programme)
 * @argv: Tableau contenant les arguments (non utilisé ici)
 * Return: 0 si succès
 */
int main(int argc, char *argv[])
{
	(void)argv; /*éviter le warning car argv non utlisé*/
	printf("%d\n", argc - 1);/*Afficher le nombre d'argument réels*/
	return (0);
}
