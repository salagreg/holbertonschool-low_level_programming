#include "main.h"
/**
* string_toupper - transformer minuscules en majuscules
* @str: contient les changements
* Return: str, pour afficher le changement
*/
char *string_toupper(char *str)
{
	int i;
	/*boucle pour aller jusqu'a la fin de ma string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/*condition pour si ma string est entre a & z*/
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/*alors je remplace minuscule par majuscule*/
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
