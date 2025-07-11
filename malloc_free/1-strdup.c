#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string in newly allocated memory
 * @str: The source string to duplicate
 *
 * Return: A pointer to the duplicated string,
 *         or NULL if str is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *newstr;
	/*condition donnée*/
	if (str == NULL)
		return (NULL);
	/*parcourir la string*/
	for (i = 0; str[i] != '\0'; i++)
		;
	/*allouer la memoire*/
	newstr = malloc((i + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);
	/*copier les caracteres*/
	for (j = 0; j < i; j++)
	{
		newstr[j] = str[j];
	}
	/*finir la chaine*/
	newstr[i] = '\0';
	return (newstr);
}
