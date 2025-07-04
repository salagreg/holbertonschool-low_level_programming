#include "main.h"
#include <stddef.h>
/**
 * _strchr - localise la première occurrence d'un caractère dans une chaîne
 * @s: pointeur vers la chaîne dans laquelle chercher
 * @c: caractère à rechercher
 * Return: pointeur vers la première occurrence de c dans s,
 *         ou NULL si c n'est pas trouvé
 */
char *_strchr(char *s, char c)
{
	int i;
	/*boucle pour parcourir ma chaine*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*condition pour localiser ou non le caractere*/
		if (s[i] == c)
			return	(&s[i]);
	}
	/*retourner null si pas de caractère*/
	return (NULL);
}
