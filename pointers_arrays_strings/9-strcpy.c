#include "main.h"
/**
* _strcpy - copier une chaine de caractères dans un fichier
* @dest : fichier vide ou l'on doit copié à l'interieur
* @src : fichier à copier pour envoyer à dest
* Return: dest / renvoie le pointeur dest pour récupérer la chaine copié
*/
char *_strcpy(char *dest, char *src)
{
	int chaine = 0;
	int destination;

	while (src[chaine] != '\0')/*compter le nbr de caractères */
	{
		chaine++;
	}
	for (destination = 0; destination < chaine; destination++)
	{
		dest[destination] = src[destination];/*copie chaque caractère*/
	}
	dest[destination] = '\0';/*doit finir par /0 car non valide sinon*/
	return (dest);
}
