#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: - int input variable
 * @av: - pointer array
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int b, c, d = 0, e;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			d++;
		}
		d++;
	}
	d++;
	a = malloc(d * sizeof(char));
	if (a == NULL)
		return (NULL);
	e = 0;
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			a[e] = av[b][c];
			e++;
		}
		a[e] = '\n';
		e++;
	}
	a[e] = '\0';
}
