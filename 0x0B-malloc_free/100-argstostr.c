#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: int input variable
 * @av: pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, e = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[e] = av[i][n];
			e++;
		}
		if (str[e] == '\0')
		{
			str[e++] = '\n';
		}
	}
	return (str);
}
