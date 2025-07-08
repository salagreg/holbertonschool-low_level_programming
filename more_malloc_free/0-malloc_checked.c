#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	/*prend la valeur en octet de ptr*/
	void *ptr = malloc(b);
	/*condition pour test*/
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
