#include "main.h"
/**
* factorial - renvoyer la factorielle d'un nombre donné
* @n : contient des entiers
* Return: -1 si erreur sinon renvoie la factorielle
*/
int factorial(int n)
{
	/*vérifie si le nombre n est négatif*/
	if (n < 0)
	{
		return (-1);
	}
	/*vérifie si n vaut 0*/
	if (n == 0)
	{
		/*factorielle de 0 est 1, donc on retourne 1*/
		return (1);
	}
	return (n * factorial(n - 1));
}
