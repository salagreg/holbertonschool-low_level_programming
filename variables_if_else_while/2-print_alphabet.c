#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - fonction principale
* i : afficher l'alphabet de a à z
* Return: 0
*/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
