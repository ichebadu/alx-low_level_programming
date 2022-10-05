#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that adds positive numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, sum;

	sum = 0;
	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			sum += atoi(argv[n]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
