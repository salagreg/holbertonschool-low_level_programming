#include "main.h"
/**
* <nom de la fonction> - <explication de la fonction>
* @<nom de l'argument>: <explication de l'argument> // Seulement s'il y a un ou plusieurs arguments
* Return: <explication des valeurs de retour> // Seulement si la fonction retourne autre chose que void
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i * i > n)
	{
		return (-1);
	}
	if (i * 1 == n )
	{
		return (1);
	}
	return (n * _sqrt_recursion(i + 1));
}
