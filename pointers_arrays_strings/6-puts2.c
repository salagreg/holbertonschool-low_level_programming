#include "main.h"
/**
* puts2 - imprime tous les autres caractères d'une chaîne
* @str : pointeur qui contient les valeurs
* Return: neant
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
