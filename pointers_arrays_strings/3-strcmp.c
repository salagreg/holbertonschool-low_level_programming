#include "main.h"
/**
* _strcmp - comparer deux string
* @s1: contient les valeurs
* @s2 : contient les valeurs
* Return: s1 & s2 / retourne les deux chaines
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
/* aller au bout des deux chaines */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* condition pour si s1 & s2 different */
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
