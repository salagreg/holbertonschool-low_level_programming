#include "main.h"
#include <stddef.h>
/**
* _strchr - localiser un caractère dans une chaine
* @s: pointe la chaine
* @c : possède les caractères
* Return: NULL si pas de localisation, sinon &s[i]
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
