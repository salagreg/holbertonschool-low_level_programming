#include "main.h"
/**
* <nom de la fonction> - <explication de la fonction>
* @<nom de l'argument>: 
* Return: 
*/


int _sqrt_idem(int n, int bis)
{
	if (bis * bis == n)
	{
		return (bis);
	}
	if (bis * bis > n)
	{
		return (-1);
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * _sqrt_idem(n + 1));
}
