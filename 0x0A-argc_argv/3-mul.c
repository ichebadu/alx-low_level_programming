#include <stdio.h>
/**
 * main - function prints two line multiplication
 * @argc: argc parameter
 * @argv: an array enter from command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multiplcationTable, n1, n2;

	for (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	multiplicationTable = n1 * n2;

	printf("%d\n", multiplicationTable);
	return (0);
}
