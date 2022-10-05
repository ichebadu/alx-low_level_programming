#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that duplicate to new memory space location
 * @str: the string parameter
 * Return: returns NULL or array
 */

char *_strdup(char *str)
{
	char *a;
	int b, c;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b] != '\0'; b++)
		;
	b++;
	a = malloc(b * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (c = 0; c < b; c++)
		a[c] = str[c];
	return (a);
}
