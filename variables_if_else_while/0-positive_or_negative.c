#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Affecter un nombre aléatoire à la variable
 * Return: Always 0
 */
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
