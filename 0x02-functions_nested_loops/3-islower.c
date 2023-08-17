#include <unistd.h>
#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * Return: if character is lowercase returns 1 otherwise returns 0
 */
int _islower(int c)
{
        /* c - takes an integer as an argument */
	if (c > 96 && c < 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
