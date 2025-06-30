#include "main.h"
/**
* _strspn - récupérer la longueur d'une sous chaine
* @s : pointe la 1ère chaine
* @accept : pointe la 2ème chaine
* Return: i
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
/*boucle pour parcourir la chaine*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*boucle pour parcourir la chaine*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*comparer les 2 chaines*/
			if (s[i] == accept[j])
			{
				break;
			}
		}
		/*verifie si on est sorti de la boucle*/
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
