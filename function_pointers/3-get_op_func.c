#include "3-calc.h"
#include <string.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - Sélectionne la fonction correcte selon l’opérateur donné
 * @s: L’opérateur en chaîne de caractères (ex: "+", "-", "*", etc.)
 *
 * Description: Parcourt un tableau de structures contenant des opérateurs
 * et leurs fonctions associées, puis retourne un pointeur vers la fonction
 * correspondante si elle est trouvée.
 *
 * Return: Pointeur vers la fonction correspondante, ou NULL si non trouvé
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
