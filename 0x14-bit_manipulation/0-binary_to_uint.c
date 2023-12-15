#include <stdio.h>
#include "main.h"
/*
 * binary_to_uint: Function converts binary number to unsigned int
 * &b: String of ones and zeros
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int sum;

	if (b == NULL)
	{
	return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != b[0] || b[i] != b[1])
	{
	return (0);
	}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
	sum = (sum << 1) + (b[i] - '0');
	}
	return (sum);
}
