#include "main.h"
/**
* puts_half - imprimer la moitié d'une chaine de caractères
* @str : pointeur qui contient les éléments
* Return: neant
*/
void puts_half(char *str)
{
	int i = 0;
	int j;
	int n;

	/* Afficher ma longueur de chaine */
	while (str[i] != '\0')
	{
		i++;
	}
	/* condition si ma chaine est pair */
	if (i % 2 == 0)
	{
		for (j = i / 2 ; str[j] != '\0' ; j++)
			_putchar(str[j]);
	}
	/* condition si ma chaine est impair */
	else if (i % 2)
	{
		for (n = (i - 1) / 2 ; n < i - 1 ; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
