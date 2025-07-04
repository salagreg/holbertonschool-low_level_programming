#include "main.h"
/**
 * my_function - Vérifie récursivement si un nombre est premier
 * @n: Le nombre à tester
 * @j: Le diviseur courant (diminué à chaque appel)
 *
 * Return: 1 si n est premier, 0 sinon
 */
int my_function(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0)
	{
		return (0);
	}
	return (my_function(n, j - 1));
}
/**
 * is_prime_number - Détermine si un entier est un nombre premier
 * @n: Le nombre à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (my_function(n, n - 1));
}
