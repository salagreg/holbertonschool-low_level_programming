#include "main.h"
/**
* _strlen_recursion - renvoyer une longueur de chaine
* @s : pointe sur le type char
* Return: 0 si arrivé à la fin de chaine, sinon le 2ème return pour calcul
*/
int _strlen_recursion(char *s)
{
	/*cas de base pour test*/
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	/*renvoie la longueur de chaine*/
	return (1 + _strlen_recursion(s + 1));
}
