#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - fonction principale
* void : neant
* Return: 0
*/
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
