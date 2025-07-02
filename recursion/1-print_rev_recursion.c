#include "main.h"
/**
* _print_rev_recursion - imprimer string à l'envers
* @s : pointe le type char
* Return: neant
*/
void _print_rev_recursion(char *s)
{
	/*vérifie si on a atteint la fin de la chaîne*/
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	/*affichage avant = chaine à l'envers*/
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
