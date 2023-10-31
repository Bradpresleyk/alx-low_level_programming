#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string of 1 and 0 characters
 * Return: converted number or 0 if not binary digit
 */
unsigned int binary_to_uint(const char *b)
{
	char temp;
	unsigned int result = 0;
	int i;

	for (i = 0; *b != '\0'; i++)
	{
	temp = *b[i];

	if (temp != "1" || temp != "0" || temp == NULL)
	{
	return (0);
	}
	if (temp == "1")
	{
	result = (result << 1) | 1;
	}
	else if (temp == "0")
	{
	result = result << 1;
	}
	}
	return (result);
}
