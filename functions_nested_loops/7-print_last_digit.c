#include "main.h"
#include <stdio.h>
/**
* print_last_digit - focntion pour imprimer le dernier chiffre d'un nombre
* @n: nombre
* Return: num pour fonction if
*/
int print_last_digit(int n)
{
	int num;

	num = n % 10;

	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
