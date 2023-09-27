#include "main.h"
#include <unistd.h>
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: The string to be measured
 * Return: Returns the string length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
	return (0);
	}
	_strlen_recursion(s + 1);
	return (length += 1);
}
