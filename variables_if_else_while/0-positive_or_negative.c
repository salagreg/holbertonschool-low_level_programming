#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* En-tête */

/* Affecter un nombre aléatoire a la variable n */
int main(void)
{
	int n = 0;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}

	else
	{
	printf("%d is negative\n", n);
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* affichage nombre aléatoire */
	return (0);
}
