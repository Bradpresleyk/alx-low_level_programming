#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function that adds positive numbers
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;

	if (argc < 2)
	{
	printf("%d\n", sum);
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
