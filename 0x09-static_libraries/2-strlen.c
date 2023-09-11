#include "main.h"
#include <unistd.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: Takes the value of a string
 * Return: returns the string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
	count++;
	s++;
	}
	return (count);
}

