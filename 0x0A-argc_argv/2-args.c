#include "main.h"
#include <stdio.h>
/**
 * main - Function that prints all arguments received
 * @argc: Number of Arguments received
 * @argv: Arguments received
 * Return: 0 (Success)
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