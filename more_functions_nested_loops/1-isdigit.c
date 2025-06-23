#include "main.h"
/**
* _isdigit - vérifie la présence de chiffre
* @c : chiffre
* Return: 1 si chiffre, si non = 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
