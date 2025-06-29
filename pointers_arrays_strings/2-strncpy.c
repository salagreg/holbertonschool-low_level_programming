#include "main.h"
/**
* _strncpy - copier une chaine de caractere
* @dest: contient des éléments
* @src : contient des éléments
* @n : contient des éléments
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copier les caractères de src dans dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* si src est plus court que n, alors .. */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
