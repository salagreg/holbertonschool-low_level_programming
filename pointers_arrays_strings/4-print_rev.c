#include "main.h"
/**
* print_rev - imprime chaine de caractère à l'envers
* @s : pointe vers un caractère
* Return: neant
*/
void print_rev(char *s)
{
	int c = 0;

	/* boucle pour aller jusqu'à \0 */
	while (s[c] != '\0')
	{
		c++;
	}
	/* boucle pour faire un retour en arrière */
	for (c = c - 1 ; c >= 0 ; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
