#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a memory space that was just allocated,
 *  which duplicates the string specified as an argument.
 * @str: the string parameter
 * Return: returns NULL if str = NULL
 * the _strdup function returns a pointer to the duplicated string.
 * In the event that there was not enough memory, it returns NULL.
 */

char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
