#include <stdio.h>
/**
 * main - Imprime tout les arguments qu'il reçoit
 * @argc: Nombre total d'arguments (y compris le nom du programme)
 * @argv: Tableau contenant les arguments
 *
 * Return: 0 si succès
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
