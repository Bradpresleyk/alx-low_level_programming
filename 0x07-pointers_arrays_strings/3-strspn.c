#include "main.h"
#include <unistd.h>
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Input
 * @accept: Input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
	if (*s == accept[r])
	{
	n++;
	break;
	}
	}
	if (!accept[r]
	{
	break;
	}
	s++;
	}
	return (n);
}
