#include <stdio.h>
/**
 * main - function prints the number of argument follwed by a line
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("the number of argument is %d\n", argc - 1);

	return (0);
}
