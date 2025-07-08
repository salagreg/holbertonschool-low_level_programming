#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: Première chaîne de caractères à concaténer
 * @s2: Deuxième chaîne de caractères à concaténer
 *
 * Return: NULL si l’allocation échoue, sinon un pointeur vers la
 *         nouvelle chaîne contenant s1 suivie de s2, terminée par '\0'
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m;
	char *newstr;

	if (s1 == NULL)
		return (NULL);
	/*redirection vers une chaine vide temporaire*/
	if (s2 == NULL)
		return (NULL);
	/*parcourir 1ere chaine*/
	for (i = 0; s1[i] != '\0'; i++)
		;
	/*parcourir 2eme chaine*/
	for (j = 0; s2[j] != '\0'; j++)
		;
	/*allouer la memoire avec malloc*/
	newstr = malloc((i + j + 1) * sizeof(char));
/*vérifier si malloc a échoué*/
	if (newstr == NULL)
		return (NULL);
	/*boucle pour copier s1*/
	for (k = 0; k < i; k++)
	{
		newstr[k] = s1[k];
	}
	/*boucle pour aller de i à j-1*/
	for (m = 0; m < j; m++)
		newstr[k + m] = s2[m];

	newstr[k + m] = '\0';
	return (newstr);
}
