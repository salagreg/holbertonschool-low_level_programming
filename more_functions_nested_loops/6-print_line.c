#include "main.h"
/**
* print_line - Dessine une ligne droite
* @n : contient le nombre de underscore
* Return: aucune
*/
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
