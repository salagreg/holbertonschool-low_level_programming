#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments passed to the function
 *
 * Description: This function takes a variable number of arguments,
 * all expected to be unsigned integers, and returns their sum.
 * If n is 0, it returns 0.
 *
 * Return: The total sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}
