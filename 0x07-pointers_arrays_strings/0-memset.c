#include "main.h"

/**
 * *_memset - memory function
 * @s: string memory area to be filled
 * @b: a character to copy
 * @n: an n number of times to copy b
 *
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
