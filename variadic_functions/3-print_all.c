#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints various types of arguments passed to the function
 * @format: A string containing the format specifiers:
 *          'c' for char, 'i' for int, 'f' for float, 's' for string
 *
 * Description: This function takes a variable number of arguments,
 * identifies their types using the format string,
 * and prints them accordingly, separated by ", ".
 * If a string is NULL, it prints "(nil)" instead.
 * A newline is printed at the end.
 *
 * Return: Nothing (void function)
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *string, *separator = "";

	va_start(arg, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				string = va_arg(arg, char *);
				if (string == NULL)
				{
					printf("(nil)\n");
				}
				printf("%s%s", separator, string);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
		va_end(arg);
		printf("\n");
	}
}
