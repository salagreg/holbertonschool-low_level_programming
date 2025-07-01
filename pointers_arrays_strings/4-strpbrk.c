#include "main.h"
#include <stddef.h>
/**
* _strpbrk - rechercher dans une chaine l'un des octects d'un ensemble
* @s : pointeur
* @accept : pointeur
* Return: &s[i] si correspond à l'un des octets, sinon NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	/*boucle pour parcourir la chaine s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*boucle pour parcourir la chaine accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*condition pour comparer les 2 chaines*/
			if (s[i] == accept[j])
			{
				/*retourner si correspondance*/
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
