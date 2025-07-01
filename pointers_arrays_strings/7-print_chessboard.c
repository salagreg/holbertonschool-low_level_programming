#include "main.h"
/**
* print_chessboard - imprimer l'échiquier
* @a : pointe un tableau
* Return: neant
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	/*parcourir les lignes du tableau*/
	for (i = 0; i < 8; i++)
	{
		/*parcourir les colonnes du tableau*/
		for (j = 0; j < 8; j++)
		{
			/*imprimer*/
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
