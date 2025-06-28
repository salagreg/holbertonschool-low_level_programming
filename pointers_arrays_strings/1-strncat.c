#include "main.h"
/**
* _strncat - concaténer deux chaines
* @dest : contient les valeurs de chaine
* @src : contient les valeurs de chaine
* @n : contient n octets
* Return: dest, retourner la chaine dest après src
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
/* Aller à la fin de dest */
	while (dest[j] != '\0')
	{
		j++;
	}
	/* si src contient n octets ou +, alors non /0 */
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	/* Ajouter une fin a dest */
	dest[j] = '\0';
	return (dest);
}
