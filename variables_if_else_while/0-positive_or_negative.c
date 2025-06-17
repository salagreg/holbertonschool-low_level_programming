#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* En-tête */

/* Affecter un nombre aléatoire a la variable n */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* affichage nombre aléatoire */
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

return (0);
}
