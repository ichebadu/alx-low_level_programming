#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to check
 * @c: char to check
 *
 * Return: a pointer to the first occurrence s with c character or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for(i = 0; *(s + i); i++)
	{
		if(*(s + 1) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
