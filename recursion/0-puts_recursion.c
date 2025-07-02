#include "main.h"
/**
* _puts_recursion - imprimer une chaine de caractères
* @s : pointe le type char
* Return: neant
*/
void _puts_recursion(char *s)
{
	/*permet de savoir si arrivé à fin de chaine*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*si non arrivé fin de chaine,affichage pointé par s*/
	_putchar(*s);
	/*appel récursif*/
	_puts_recursion(s + 1);
}
