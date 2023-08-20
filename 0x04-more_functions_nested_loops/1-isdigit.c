#include <unistd.h>
#include "main.h"
/**
 * _isdigit - Function that checks for a digit from 0 to 9
 * @c: The value to be checked
 * Return: returns 1 if c is a digit else returns 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
