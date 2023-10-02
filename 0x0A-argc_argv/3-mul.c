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
	int sum, num1, num2;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);

	return (0);
}
