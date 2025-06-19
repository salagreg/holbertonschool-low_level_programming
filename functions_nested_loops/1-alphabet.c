#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Affiche l'alphabet en minuscules, suivi d'un saut de ligne.
* void : neant
* Return: 0
*/
void print_alphabet(void) /** variable pour avoir l'alphabet **/
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
