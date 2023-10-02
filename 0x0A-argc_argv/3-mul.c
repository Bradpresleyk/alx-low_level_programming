#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 1;
	int i;

	for (i = 1; i < argc; i++)
	{
	sum *= atoi(argv[i]);
	}
	if (argc - 1 == 2)
	{
	printf("%d\n", sum);
	return (0);
	}
	else if (argc - 1 != 2)
	{
	printf("%s\n", "Error");
	return (1);
	}
}
