#include "main.h"
#include <stdio.h>
/**
 * main - Function that prints the name of a program
 * @argc: Number of arguments passed in argv array
 * @argv: Array of arguments passed
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
