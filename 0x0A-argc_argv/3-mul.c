#include <stdio.h>
/**
 * main - function that print the multiplication of two numbers
 * @argc: argc parameter
 * @argv: an array enter from command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
