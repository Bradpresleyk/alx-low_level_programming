#include <unistd.h>
#include "main.h"
/**
 * _isupper - Checks for an uppercase character
 * @c: The character to be checked
 * Return: Returns 1 if c is uppercase else returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
