#include "main.h"
/**
 * print_triangle - afficher triangle
* @size: affiche les espaces et les #
* Return: neant
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
