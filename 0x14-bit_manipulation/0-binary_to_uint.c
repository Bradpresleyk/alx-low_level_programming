#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: String of ones and zeros
 *
 * Return: Unsigned int if binary, else 0
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
	if (b[i] != b[0] && b[i] != b[1])
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
