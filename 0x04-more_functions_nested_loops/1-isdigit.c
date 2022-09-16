#include "main.h"

/**
 * _isdigit - check for digit
 *
 * Description: checks if a number falls between 0 and 9
 * @c: digit to be checked
 * Return: 1 if its a digit else return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
