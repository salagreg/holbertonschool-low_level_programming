#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;

	if (s1 == NULL)
		return("");
	/*redirection vers une chaine vide temporaire*/
	if (s2 == NULL)
		return ("");
	/*parcourir 1ere chaine*/
	for (i = 0; s1[i] != '\0'; i++)
		;
	/*parcourir 2eme chaine*/
	for (j = 0; s2[j] != '\0'; j++)
		;
	/*allouer la memoire avec malloc*/
	char *newstr = malloc((i + j + 1) * sizeof(char));
        /*vérifier si malloc a échoué*/
	if (newstr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		newstr[k] = s1[k];
	for (int copy = 0; copy < j; copy++)
		newstr[copy++] = s2[copy]

	newstr[k] = '\0';
	return (newstr);
}
