#include "main.h"
#include <stddef.h>
/**
* _strstr - localiser une sous-chaine
* @haystack : pointe vers la chaine haystack
* @needle : pointe vers la sous-chaine needle
* Return: needle si début de la sous-chaine trouvéé, sinon NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	/*parcourir la chaine haystack*/
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/*parcourir la sous-chaine needle*/
		for (j = 0; needle[j] != '\0'; j++)
		{
			/*comparer les deux chaines*/
			if (haystack[i] == needle[j])
			{
				/*retourner si début de chaine trouvée*/
				return (needle);
			}
		}
	}
	return (NULL);
}
