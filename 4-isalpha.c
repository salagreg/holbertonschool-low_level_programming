#include "main.h"
#include <stdio.h>
/**
* _isalpha - lien avec mon fichier principal
* @c : affiche l'alphabet en minuscule & majuscule
* Return: 1 si minuscule ou majuscule
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
