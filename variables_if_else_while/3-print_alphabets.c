#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - fonction principale
* c : Afficher alphabet minuscule & majuscule sur la même ligne
* Return: 0
*/
int main(void)
{
	char c;
	char n;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
