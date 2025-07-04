#include "main.h"
/**
* _memcpy - copier une zone de mémoire
* @dest : pointe sur le fichier copié
* @src : pointe sur le fichier à copié
* @n : nombres d'octets
* Return: dest, le fichier copié pointé
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/*boucle pour parcourir ma zone de mémoire*/
	for (i = 0; i < n; i++)
	{
		/*formule pour copier un fichier dans un autre*/
		dest[i] = src[i];
	}
	return (dest);
}
