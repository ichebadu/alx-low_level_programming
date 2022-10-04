#include <stdio.h>
/**
 * main - function prints all arg per line
 * @argc: argc parameter
 * @argv: an array enter from command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
