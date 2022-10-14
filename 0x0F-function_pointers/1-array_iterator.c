#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - writes the character n to stdout
 * @array: Array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t y;
if (array == NULL || size == 0 || action == NULL)
	{
	return;
	}
	for (y = 0; y < size; y++)
	{
	(*action)(array[y]);
	}
}
