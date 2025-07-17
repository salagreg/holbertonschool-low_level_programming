#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers separated by a string
 * @separator: The string to print between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Prints numbers followed by a new line.
 * If separator is NULL, it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int numb = 0;

	if (separator == NULL)
		return;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		numb = va_arg(arg, unsigned int);
		printf("%d", numb);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
