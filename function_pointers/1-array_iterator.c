#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an integer array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @action: A pointer to the function to be used on each element
 *
 * Return: This function iterates over an array and applies the given
 * function to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
