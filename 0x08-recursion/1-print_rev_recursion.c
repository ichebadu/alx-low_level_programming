#include "main.h"

/**
 * _print_rev_recursion - this function that prints a string in reverse
 * @s: the string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
