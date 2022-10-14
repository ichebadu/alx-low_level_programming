#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - this functio writes the character n to stdout
 * @s: String
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;
while (i < 5)
	{
	if (s == ops[i].op)
	return (ops[i].f);
	i++;
	}
return (0);
}
