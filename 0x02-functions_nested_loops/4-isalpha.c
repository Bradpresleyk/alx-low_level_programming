#include <unistd.h>
#include "main.h"
/**
 * _isalpha - Checks if a character is a letter
 * Return: returns 1 if character is a letter otherwise returns 0
 * c: takes an integer as a character
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91 || c > 96 && c < 123)
		return (1);
	else
	{
		return (0);
	}
}

