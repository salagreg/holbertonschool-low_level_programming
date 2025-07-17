#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Point d'entrée du programme de calcul
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau de chaînes représentant les arguments
 *
 * Description: Ce programme effectue une opération mathématique
 * entre deux entiers passés en argument. Il utilise une fonction
 * correspondant à l'opérateur fourni.
 *
 * Return: 0 si succès, ou un code d'erreur spécifique (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int argument1, argument2, result;
	char c;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	argument1 = atoi(argv[1]);
	argument2 = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && argument2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = function(argument1, argument2);
	printf("%d\n", result);
	return (0);
}
