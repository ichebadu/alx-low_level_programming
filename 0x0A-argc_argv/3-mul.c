#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that print the multiplication of two numbers
 * @argc: argc parameter
 * @argv: an array enter from command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		res = res * atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
