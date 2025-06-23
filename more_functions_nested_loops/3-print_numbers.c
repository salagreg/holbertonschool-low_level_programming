#include "main.h"
/**
* print_numbers - Imprimer les nombres de 0 à 9
* void : neant
* Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
