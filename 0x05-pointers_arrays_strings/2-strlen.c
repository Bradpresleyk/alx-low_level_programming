#include "main.h"
#include <unistd.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: Takes the value of a string
 * Return: returns the string length
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; i <= s; i++)
	{
	count++;
	}
	return (count);
}
