#include "main.h"
/**
* print_square - Imprime un carré
* @size: contient les valeurs de nombres et de tailles
* Return: neant
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

			for (i = 1 ; i < size ; i++)
			{
				for (j = 0 ; j < size ; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
}
