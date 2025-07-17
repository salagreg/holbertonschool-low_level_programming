#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a separator
 * @separator: The string to print between the strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: Prints each string passed as argument. If a string is NULL,
 * it prints "(nil)" instead. Strings are separated by the separator string,
 * except after the last string. If separator is NULL, no separator is printed.
 *
 * Return: Nothing (void function)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *string = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);

		if (separator == NULL)
			return;
		if (string == NULL)
			printf("(nil)\n");

		printf("%s", string);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
