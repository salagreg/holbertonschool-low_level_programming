#include "main.h"
/**
* _pow_recursion - fonction qui renvoie la valeur
* @x : contient la valeur de x
* @y : contient la puissance de y
* Return: la récursion
*/
int _pow_recursion(int x, int y)
{
	/*condition donnée pour test si erreur*/
	if (y < 0)
	{
		return (-1);
	}
	/*condition de cas de base*/
	if (y == 0)
	{
		return (1);
	}
	/*retourne la récursion: x * result precedent*/
	return (x * _pow_recursion(x, y - 1));
}
