#include <stdio.h>
/**
 * main - Affiche le nom du programme argc[0]
 * @argc : Nombre d'arguments
 * @argv : Tableau des arguments
 * Return: Toujours 0 si succès
 */
int main(int argc, char *argv[])
{
	(void)argc; /*éviter un warning car argc non utilisé*/
	printf("%s\n", argv[0]);/*argc[0] pour recup nom programme*/
	return (0);
}
