#include "main.h"

/**
* _isupper - voir si majuscule ou pas
* @c : vérifie la présence d'un caractère majuscule
* Return: 0 si non majuscule / 1 si majsucule
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
