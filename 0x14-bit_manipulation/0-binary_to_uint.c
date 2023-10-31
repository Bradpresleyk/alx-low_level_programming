#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string of 1 and 0 characters
 * Return: converted number or 0 if not binary digit
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;
	if (!b)
	return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
	if (b[a] != '0' && b[a] != '1')
	return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
	num <<= 1;
	if (b[a] == '1')
	num += 1;
	}
	return (num);
}
