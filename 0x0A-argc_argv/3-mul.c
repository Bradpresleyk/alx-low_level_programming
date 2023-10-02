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
	int sum;

	if (argc - 1 == 2)
	{
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
	}
	if (argc - 1 != 2)
	{
	printf("%s\n", "Error");
	return (1);
	}

}
