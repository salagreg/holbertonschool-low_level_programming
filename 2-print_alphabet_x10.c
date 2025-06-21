#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - affiche l'alphabet
 * void - neant
 * Return: aucune
 */
void print_alphabet_x10(void) /** avoir l'alphabet 10 fois **/
{
	int i;
	char c;

	for (i = 0 ; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
