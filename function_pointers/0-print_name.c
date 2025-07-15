#include "function_pointers.h"
/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char * and returns void
 *
 * Return: This function receives a string and a pointer to
 * a function. It then calls the function and passes the string to it.
 */
void print_name(char *name, void (*f)(char *))
{
	/*call the function pointed to by f and pass it name as the argument*/
	f(name);
}
