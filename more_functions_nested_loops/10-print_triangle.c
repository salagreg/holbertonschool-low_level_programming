#include "main.h"
/**
* <nom de la fonction> - <explication de la fonction>
* @<nom de l'argument>: <explication de l'argument> // Seulement s'il y a un ou plusieurs arguments
* Return: <explication des valeurs de retour> // Seulement si la fonction retourne autre chose que void
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (k = 1 ; k <= size ; k++)
		{
			for (i = 0 ; i < size - k ; i++)
			{
				_putchar(' ');
			}
			{
				for (j = 0 ; j < k ; j++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
