#include "main.h"
#include <stdio.h>
/**
* _puts - imprime une chaine de caractères
* @str : contient les valeurs de la chaine
* Return: neant
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
