#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatène deux chaînes de caractères
 * @s1: première chaîne
 * @s2: seconde chaîne
 * @n: nombre de caractères de s2 à concaténer
 *
 * Return: un pointeur vers une nouvelle chaîne allouée
 * contenant s1 suivie des n premiers caractères de s2.
 * Si s1 ou s2 est NULL, ils sont traités comme des chaînes vides.
 * Si malloc échoue, retourne NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, k;
	unsigned int j, l;
	/*condition de base pour continuer ou non*/
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	/* parcourir les deux strings*/
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	/*copier les n premiers caracteres de j*/
	if (n >= j)
	{
		n = j;
	}
	/*allocation de la memoire*/
	ptr = malloc((i + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	/*boucle pour concatener les deux chaines*/
	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];
	for (l = 0; l < n; l++)
		ptr[k + l] = s2[l];

	ptr[k + n] = '\0';
	return (ptr);
}
