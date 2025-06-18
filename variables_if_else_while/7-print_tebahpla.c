#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
/**
* main - fonction principale
* int : neant
* Return: 0
*/
int main(void)
{
        char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
