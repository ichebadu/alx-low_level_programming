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
	char *copy;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; i < str[i]; i++)
	{
		;
	}
	i++;
	copy = malloc(sizeof(char) * i);
	if (copy == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		copy[j] = str[j];
	return (copy);
}
