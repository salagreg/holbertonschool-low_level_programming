#include "main.h"
#include <stdio.h>
/**
* _islower - Affiche l'alphabet en minuscule
* @c : Affiche 1 si minuscule
* Return: 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
